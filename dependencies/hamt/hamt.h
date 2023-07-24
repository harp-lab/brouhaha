// Copyright (C) 2017 Thomas Gilray, Kristopher Micinski
// See the notice in LICENSE.md

#pragma once

#include "compat.h"
#include "gc.h"
#include <algorithm>
#include <cstring>
#include <iostream>

// The largest that bottom depth can be is 10, after this you run out of 64bit hash
#define bd 10
// The fixed number of key/value slots in a root node
#define rootsize 7

// A linked list for storing collisions after d=10 layers of inner nodes KV -> KV*
template <typename K, typename V>
class LL // Linked List
{
    typedef LL<K, V> LLtype; // LLtype becomes an alias for LL<K,V>

public:
    // these pointers are constant bcoz the linked list is immutable, making it safe to
    // do structural sharing
    const K *const k;         // key pointer
    const V *const v;         // value pointer
    const LLtype *const next; // pointing to the next element

    LL<K, V>(const K *k, const V *v, const LLtype *next) // constructor, takes three arugments and initializes them
        : k(k), v(v), next(next)                         // initialization list
    {
    }

    const V *find(const K *const k) const // find function, returns a const pointer of V(alue)
    {
        if (*(this->k) == *k)
            return v; // returns the V pointer if the key matches
        else if (next)
            return next->find(k); // recursively calls find on the next element
        else
            return 0; // if the linked list is exhausted and the element is not found then returns 0
    }

    /* Does both insert and update functions, as the LL is immutable, both lead to same set of operations
        There are three cases
            1) The current node is the node we have to update, then we recreate the node and return the pointer to the
                new node.
            2) If current node is not the expected, we rebuild current and call insert on the next, this goes on till
                we find the node, then we stop rebuilding and both lists share the tail.
            3) (Insertion case) If the current node is last node and it doesn't match, we just rebuild the current
                node and the new node and attach currents tail to new and returns current node's pointer*/
    const LLtype *insert(const K *const k, const V *const v, u64 *const cptr) const
    {
        if (*(this->k) == *k)
            return new ((LLtype *)GC_MALLOC(sizeof(LLtype))) LLtype(this->k, v, next);
        else if (next) // next is this->next
            return new ((LLtype *)GC_MALLOC(sizeof(LLtype))) LLtype(this->k, this->v, next->insert(k, v, cptr));
        else
        {
            (*cptr)++;
            const LLtype *const link1 = new ((LLtype *)GC_MALLOC(sizeof(LLtype))) LLtype(this->k, this->v, 0);
            const LLtype *const link0 = new ((LLtype *)GC_MALLOC(sizeof(LLtype))) LLtype(k, v, link1);
            return link0;
        }
    }

    /* Works like insert, rebuild till we find the node and then return the next node's pointer.*/
    const LLtype *remove(const K *const k, u64 *const cptr) const
    {
        if (*(this->k) == *k)
        {
            // Found it, remove by returning its "next" link
            (*cptr)--;
            return this->next;
        }
        else if (this->next)
        {
            const LLtype *const next = this->next->remove(k, cptr); // recursive call to get the next pointer
            if (this->next == next)
                return this;
            else
                return new ((LLtype *)GC_MALLOC(sizeof(LLtype))) LLtype(this->k, this->v, next);
        }
        else
            return this;
    }
};

// A key-value pair; this is both one row in Bagwell's underlying AMT
// or a buffer of such KV rows in an internal node of the data structure
template <typename K, typename V, unsigned d> // Key is the key, V - Value and d is depth
// use depth to identify which part of hash to be consumed
class KV
{
    typedef KV<K, V, d> KVtype;     // at depth d
    typedef KV<K, V, d + 1> KVnext; // at depth d+1

public:
    // We use two unions and the following cheap tagging scheme:
    // when the lowest bit of Key k is 0, it's a key and a K*,V* pair (key and value),
    // when the lowest bit of Key k is 1, it's either a bm (bitmap) in the top 63 bits with a
    // KV<K,V,d+1>* v inner node pointer when d is less than 9 or it's just a 1 and a pointer to a
    // LL<K,V>* for collisions
    union Key
    {
        const u64 bm;       // 64 bit bitmap
        const K *const key; // this declaration means the pointer is constant and cannot be changed, but also
        // value that pointer points to is also constant and cannot be changed through this pointer.

        // these are constructors to the union one initializes it to a key pointer and one to a bitmap value
        Key(const K *const key) : key(key) {} // when it is key:value pair
        Key(const u64 bm) : bm(bm) {}         // when it is a sub trie we store the bitmap of it here
    } k;

    union Val
    {
        const KVnext *const node; // this points to the next level node.
        const V *const val;       // this is a value

        Val(const KVnext *const node) : node(node) {} // when it is a subtrie
        Val(const V *const val) : val(val) {}         // when it is just a key:value
    } v;

    // Empty constructor
    KV<K, V, d>() : k((u64)0), v((V *)0) {}

    // Copy constructor
    KV<K, V, d>(const KVtype &o) : k(o.k), v(o.v) {}

    // The different cases spelled out as constructors
    KV<K, V, d>(const u64 bm, const KVnext *const kv) : k(bm), v(kv) {}
    KV<K, V, d>(const K *key, const V *val) : k(key), v(val) {}

    // Equality check (doesn't actually matter which types k and v are)
    bool operator==(const KVtype &kv) const
    {
        return k.bm == kv.k.bm && v.node == kv.v.node;
    }

    // This is the find algorithm for internal nodes
    // Given a KV row pointing to an inner node, returns the V* for a given h and key pair or 0 if none exists
    static const V *inner_find(const KVtype &kv, const u64 h, const K *const key)
    {
        const u64 hpiece = (h & 0x3f) % 63; // masks the 6 least significant bits and get the value 0-63
        // how does this work, if you only have 63 bits useful for subtries, there can only 63^10

        // bm is the bitmap indicating which elements are actually stored
        // count is how many KV elements this inner node stores (popcount of bm)
        // i is hpiece's index; i.e., how many KV elements *preceed* index hpiece
        const KVnext *const data = kv.v.node;
        const u64 bm = kv.k.bm >> 1; // I think we are moving the least significant bit out, as we use it to indicate if a node is key:value pair or a bm for a sub trie

        const bool exists = bm & (1UL << hpiece); // here were are masking the Eth bit we arre interested in and checking if it exists
        if (exists)
        {
            const u32 i = __builtin_popcountll((bm << 1) << (63 - hpiece));
            if ((data[i].k.bm & 1) == 0)
            {
                if (*(data[i].k.key) == *key)
                    return data[i].v.val;
                else
                    return 0;
            }
            else
                return KVnext::inner_find(data[i], h >> 6, key);
        }
        else
            return 0;
    }

    static const void inner_get_keys(const KVtype &kv, long &numKeysStored, const K **keyArray)
    {
        const KVnext *const data = kv.v.node;
        const u64 bm = kv.k.bm >> 1;
        const u32 max_elem = __builtin_popcountll(bm << 1);
        for (int i = 0; i < max_elem; i++)
        {
            if ((data[i].k.bm & 1) == 0)
            {
                keyArray[numKeysStored] = data[i].k.key;
                numKeysStored = numKeysStored + 1;
            }
            else
            {
                KVnext::inner_get_keys(data[i], numKeysStored, keyArray);
            }
        }
    }

    static u64 hash_helper(u64 h_val, const K *const key, const V *const val, bool is_set)
    {
        h_val ^= key->hash() + 0x9e3779b9 + (h_val << 6) + (h_val >> 2);
        if (!is_set)
        {
            h_val ^= val->hash() + 0x9e3779b9 + (h_val << 6) + (h_val >> 2);
        }
        return h_val;
    }

    static const void inner_get_hash(const KVtype &kv, u64 &h, bool is_set)
    {
        const KVnext *const data = kv.v.node;
        const u64 bm = kv.k.bm >> 1;
        const u32 max_elem = __builtin_popcountll(bm << 1);
        for (int i = 0; i < max_elem; i++)
        {
            if ((data[i].k.bm & 1) == 0)
            {
                h = hash_helper(h, data[i].k.key, data[i].v.val, is_set);
            }
            else
            {
                KVnext::inner_get_hash(data[i], h, is_set);
            }
        }
    }

    // This is a helper for returning a copy of an internal node with one row replaced by kv
    static const KVtype *update_node(const KVtype *old, const u32 count, const u32 i, const KVtype &kv)
    {
        KVtype *copy = (KVtype *)GC_MALLOC(count * sizeof(KVtype)); // allocating the space required to store the old array including the new element.
        std::memcpy(copy, old, count * sizeof(KV));                 // copying all the data from old array to the new array
        new (copy + i) KVtype(kv);                                  // this syntax is called placement new, and stores the data at a given pointer location, this assumes that the required
        // memory was already allocated.
        return copy; // returning the copy of the array.
    }

    // Helper returns a fresh inner node for two merged h, k, v triples
    static const KVtype new_inner_node(const u64 h0, const K *const k0, const V *const v0,
                                       const u64 h1, const K *const k1, const V *const v1)
    {
        // Take the lowest 6 bits modulo 63
        const u32 h0piece = (h0 & 0x3f) % 63;
        const u32 h1piece = (h1 & 0x3f) % 63;

        if (h0piece == h1piece) // if the hash for this level is also equal, then new_inner_node is called upon, to let the next hash to be consumed
        // and so on, at the level where hash is different they will be put into arrays, if not they will go into the LL in the 10th level
        {
            // Create a new node to merge them at d+1
            const KVnext childkv = KVnext::new_inner_node(h0 >> 6, k0, v0, h1 >> 6, k1, v1);
            KVnext *const node = (KVnext *)GC_MALLOC(sizeof(KVnext));
            new (node + 0) KVnext(childkv);

            // Return a new kv; bitmap indicates h0piece, the shared child inner node
            return KVtype(((1UL << h0piece) << 1) | 1, node);
        }
        else
        {
            // The two key/value pairs exist at different buckets at this d;
            // allocate them in proper order
            KVnext *const node = (KVnext *)GC_MALLOC(2 * sizeof(KVnext));
            if (h1piece < h0piece)
            {
                new (node + 0) KVnext(k1, v1);
                new (node + 1) KVnext(k0, v0);
            }
            else
            {
                new (node + 0) KVnext(k0, v0);
                new (node + 1) KVnext(k1, v1);
            }

            // Return a new kv; bitmap indicates both h0piece and h1piece
            return KVtype((((1UL << h0piece) | (1UL << h1piece)) << 1) | 1, node);
        }
    }

    // Inserts an h, k, v into an existing KV and returns a fresh KV for extended hash
    static const KVtype insert_inner(const KVtype &kv, const u64 h, const K *const key, const V *const val, u64 *const cptr)
    {
        // data is a pointer to the inner node at kv.v
        // bm is the bitmap indicating which elements are actually stored
        // count is how many KV elements this inner node stores (popcount of bm)
        // i is hpiece's index; i.e., how many KV elements *preceed* index hpiece
        const KVnext *const data = kv.v.node;
        const u64 bm = kv.k.bm >> 1;
        const u32 hpiece = (h & 0x3f) % 63;
        const u32 count = __builtin_popcountll(bm);
        const u32 i = __builtin_popcountll((bm << 1) << (63 - hpiece));

        const bool exists = bm & (1UL << hpiece);
        if (exists)
        {
            // Check to see what kind of KV pair this is by checking the lowest bit of k
            //   0 -> it's an actual K*,V* pair
            //   1 -> it's either another inner node (KV*) or a linked list (LL<K,V>*) depending on d+1
            if ((data[i].k.bm & 1) == 0)
            {
                // Does the K* match exactly?
                if (*(data[i].k.key) == *key)
                {
                    // it already exists; replace the value
                    const KVnext *const node = KVnext::update_node(data, count, i, KVnext(key, val));
                    return KVtype(kv.k.bm, node);
                }
                else
                {
                    // Merge them into a new inner node
                    (*cptr)++;
                    const KVnext childkv = KVnext::new_inner_node(
                        // Passes in the first triple of h,k,v, then the second
                        // When shifting the just-recomputed hash right, this formula is computed at compile time
                        // This also means a warning on the d=9 template instantiation, so we do %64 as d=10
                        // does not care in any case as it's definitely a LL*.
                        (data[i].k.key->hash() >> ((6 * (d + 1) + 4)) % 64), data[i].k.key, data[i].v.val,
                        h >> 6, key, val);
                    const KVnext *const node = KVnext::update_node(data, count, i, childkv);
                    return KVtype(kv.k.bm, node);
                }
            }
            else // if ((data[i].k & 1) == 1)
            {
                // an inner node is already here; recursively do an insert and replace it
                const KVnext childkv = KVnext::insert_inner(data[i], h >> 6, key, val, cptr);
                const KVnext *const node = KVnext::update_node(data, count, i, childkv);
                return KVtype(kv.k.bm, node);
            }
        }
        else
        {
            // Create a new copy with this Key/Value inserted at index i
            (*cptr)++;
            KVnext *const node = (KVnext *)GC_MALLOC((count + 1) * sizeof(KVnext));
            std::memcpy(node, data, i * sizeof(KVnext));
            std::memcpy(&(node[i + 1]), &(data[i]), (count - i) * sizeof(KVnext));
            new (node + i) KVnext(key, val);

            // Update the bitmap and return this new inner node as a KV
            return KVtype(((bm | (1UL << hpiece)) << 1) | 1, node);
        }
    }

    // Removes a single arbitrary key/value and sets keyPtr/valPtr
    static const KVtype removeFirst_inner(const KVtype &kv, const K **const keyPtr, const V **const valPtr)
    {
        const KVnext *const data = kv.v.node;
        const u64 bm = kv.k.bm >> 1;
        const u32 count = __builtin_popcountll(bm);

        if (data[0].k.bm & 1)
        {
            // Remove first from inner node
            const KVnext childkv = KVnext::removeFirst_inner(data[0], keyPtr, valPtr);

            // If a new inner node comes back, build an updated node with the same bm
            if (childkv.k.bm != 0)
            {
                const KVnext *const node = KVnext::update_node(data, count, 0, childkv);
                return KVtype(kv.k.bm, node);
            }
            // Otherwise, fall through and shrink the node
        }
        else
        {
            // This key/value is next
            *keyPtr = data[0].k.key;
            *valPtr = data[0].v.val;
        }

        // If either a key/value or whole inner node was removed, shrink this inner node
        if (count == 1)
            return KVtype((K *)0, (V *)0);
        else
        {
            KVnext *const node = (KVnext *)GC_MALLOC((count - 1) * sizeof(KVnext));
            std::memcpy(node, &(data[1]), (count - 1) * sizeof(KVnext));
            // bm & (bm-1) removes the lowest-significant bit in bm
            const u64 newbm = ((bm & (bm - 1)) << 1) | 1;
            return KVtype(newbm, node);
        }
    }

    // Removes key from kv and returns an updated KV
    static const KVtype remove_inner(const KVtype &kv, const u64 h, const K *const key, u64 *const cptr)
    {
        // We follow the same basic structure as insert_inner; first, calculate the next hash piece
        const KVnext *const data = kv.v.node;
        const u64 bm = kv.k.bm >> 1;
        const u32 hpiece = (h & 0x3f) % 63;
        const u32 count = __builtin_popcountll(bm);

        const bool exists = bm & (1UL << hpiece);
        if (exists)
        {
            const u32 i = __builtin_popcountll((bm << 1) << (63 - hpiece));

            // Check to see what kind of KV pair this is by checking the lowest bit of k
            if ((data[i].k.bm & 1) == 0)
            {
                // Does the K* match exactly?
                if (*(data[i].k.key) == *key)
                {
                    if (count > 1)
                    {
                        // Create a new node, removing this kv
                        (*cptr)--;
                        KVnext *const node = (KVnext *)GC_MALLOC((count - 1) * sizeof(KVnext));
                        std::memcpy(node, data, i * sizeof(KV));
                        std::memcpy(&(node[i]), &(data[i + 1]), (count - 1 - i) * sizeof(KVnext));

                        //  Remove this hpiece from the bitmap
                        const u64 newbm = ((bm & (0xffffffffffffffff ^ (1UL << hpiece))) << 1) | 1;
                        return KVtype(newbm, node);
                    }
                    else
                    {
                        (*cptr)--;
                        return KVtype((K *)0, (V *)0);
                    }
                }
                else
                    // Key is already absent
                    return kv;
            }
            else // if ((data[i].k & 1) == 1)
            {
                // Try a remove_inner and see what comes back
                const KVnext childkv = KVnext::remove_inner(data[i], h >> 6, key, cptr);
                if (childkv == data[i])
                    // Key was already absent within child node
                    return kv;
                else if (childkv.k.bm == 0)
                {
                    if (count > 1)
                    {
                        // Create a new node, removing this kv
                        KVnext *const node = (KVnext *)GC_MALLOC((count - 1) * sizeof(KVnext));
                        std::memcpy(node, data, i * sizeof(KV));
                        std::memcpy(&(node[i]), &(data[i + 1]), (count - 1 - i) * sizeof(KVnext));

                        // Remove this hpiece from the bitmap
                        const u64 newbm = ((bm & (0xffffffffffffffff ^ (1UL << hpiece))) << 1) | 1;
                        return KVtype(newbm, node);
                    }
                    else
                        return KVtype((K *)0, (V *)0);
                }
                else
                {
                    const KVnext *const node = KVnext::update_node(data, count, i, childkv);
                    return KVtype(kv.k.bm, node);
                }
            }
        }
        else
            // Key is already absent
            return kv;
    }
};

// A template-specialized version of KV<K,V,d> for the lowest depth of inner nodes, d==bd
// After this we have exhausted our 64 bit hash (4 bits used by the root and 6*10 bits used by inner nodes)
template <typename K, typename V>
class KV<K, V, bd>
{
    typedef LL<K, V> LLtype;
    typedef KV<K, V, bd> KVbottom;

public:
    // We use two unions and the following cheap tagging scheme:
    // when the lowest bit of Key k is 0, it's a key and a K*,V* pair (key and value),
    // when the lowest bit of Key k is 1, it's either a bm (bitmap) in the top 63 bits with a
    // KVnext* v inner node pointer when d is less than bd-1 or it's just a 1 and a pointer to a
    // LL<K,V>* for collisions (In this case we use LL<K,V>*)
    union Key
    {
        const u64 bm;
        const K *const key;

        Key(const K *const key) : key(key) {}
        Key(const u64 bm) : bm(bm) {}
    } k;

    union Val
    {
        const LLtype *const list;
        const V *const val;

        Val(const LLtype *const ll) : list(ll) {}
        Val(const V *const val) : val(val) {}
    } v;

    // Copy constructor
    KV<K, V, bd>(const KVbottom &o) : k(o.k), v(o.v) {}

    // The different cases spelled out as constructors
    KV<K, V, bd>(const u64 bm, const LLtype *const ll) : k(bm), v(ll) {}
    KV<K, V, bd>(const K *key, const V *val) : k(key), v(val) {}

    // Equality check (doesn't actually matter which types k and v are)
    bool operator==(const KVbottom &kv) const
    {
        return k.bm == kv.k.bm && v.val == kv.v.val;
    }

    // kv is a row on the bottom depth db, so kv.v is a linked list
    static const V *inner_find(const KVbottom &kv, const u64 h, const K *const key)
    {
        return kv.v.list->find(key);
    }

    static const void inner_get_keys(const KVbottom &kv, long &numKeysStored, const K **keyArray)
    {
        std::cout << "In the final one" << std::endl;
    }

    static u64 hash_helper(u64 h_val, const K *const key, const V *const val, bool is_set)
    {
        h_val ^= key->hash() + 0x9e3779b9 + (h_val << 6) + (h_val >> 2);
        if (!is_set)
        {
            h_val ^= val->hash() + 0x9e3779b9 + (h_val << 6) + (h_val >> 2);
        }
        return h_val;
    }

    static const void inner_get_hash(const KVbottom &kv, u64 &h, bool is_set)
    {
        std::cout << " in the final get hash" << std::endl;
    }

    // This is a helper for returning a copy of an internal node with one row replaced by kv
    static const KVbottom *update_node(const KVbottom *old, const u32 count, const u32 i, const KVbottom &kv)
    {
        KVbottom *copy = (KVbottom *)GC_MALLOC(count * sizeof(KVbottom));
        std::memcpy(copy, old, count * sizeof(KV));
        new (copy + i) KVbottom(kv);
        return copy;
    }

    // Helper returns a fresh inner node for two merged h, k, v triples
    static const KVbottom new_inner_node(const u64 h0, const K *const k0, const V *const v0,
                                         const u64 h1, const K *const k1, const V *const v1)
    {
        const LLtype *const ll1 = new ((LLtype *)GC_MALLOC(sizeof(LLtype))) LLtype(k0, v0, 0);
        const LLtype *const ll0 = new ((LLtype *)GC_MALLOC(sizeof(LLtype))) LLtype(k1, v1, ll1);
        return KVbottom(1, ll0);
    }

    // Inserts an h, k, v into an existing KV and returns a fresh KV for extended hash
    static const KVbottom insert_inner(const KVbottom &kv, const u64 h, const K *const key, const V *const val, u64 *const cptr)
    {
        if (kv.k.bm & 1UL)
            return KVbottom(1UL, kv.v.list->insert(key, val, cptr));
        else
        {
            // Does the K* match exactly?
            if (*(kv.k.key) == *key)
            {
                // Just replace the value
                return KVbottom(kv.k.key, val);
            }
            else
            {
                // We've run out of hash, merge them into a linked list
                (*cptr)++;
                const LLtype *const ll1 = new ((LLtype *)GC_MALLOC(sizeof(LLtype))) LLtype(key, val, 0);
                const LLtype *const ll0 = new ((LLtype *)GC_MALLOC(sizeof(LLtype))) LLtype(kv.k.key, kv.v.val, ll1);
                return KVbottom(1UL, ll0);
            }
        }
    }

    // Removes an arbitrary key/value (setting the removed key/value to keyPtr and valPtr locations)
    static const KVbottom removeFirst_inner(const KVbottom &kv, const K **const keyPtr, const V **const valPtr)
    {
        *keyPtr = kv.v.list->k;
        *valPtr = kv.v.list->v;
        const LLtype *const next = kv.v.list->next;
        if (next)
            return KVbottom(1, next);
        else
            return KVbottom((K *)0, (V *)0);
    }

    // Removes a key on the bottom-depth inner-node row kv (h, key)
    static const KVbottom remove_inner(const KVbottom &kv, const u64 h, const K *const key, u64 *const cptr)
    {
        // kv.k.bm & 1 != 0 is checked by caller
        const LLtype *const ll = kv.v.list->remove(key, cptr);
        if (ll == kv.v.list) // Key was already absent within the list?
            return kv;
        else if (ll == 0) // List is now empty?
            return KVbottom((K *)0, (V *)0);
        else // Got a new linked list back.
            return KVbottom(1, ll);
    }
};

enum hamt_ds_type
{
    set_type,
    hash_type
};

// A simple hash-array-mapped trie implementation (Bagwell 2001)
// Garbage collected, persistent/immutable hashmaps
template <typename K, typename V>
class hamt
{
    typedef KV<K, V, 0> KVtop;

private:
    // We use up to 4 bits of the hash for the root, then the
    // other 10*6bits are used for inner nodes up to 10 deep
    KVtop data[rootsize];
    u64 count;
    hamt_ds_type cur_type;
    // 0 for hash
    // 1 for set

public:
    hamt<K, V>()
        : data{}, count(0), cur_type(hamt_ds_type::hash_type)
    {
    }

    hamt<K, V>(hamt_ds_type cur_ds_type)
        : data{}, count(0), cur_type(cur_ds_type)
    {
    }

    const V *get(const K *const key) const
    {
        // type K must support a method u64 hash() const;
        const u64 h = key->hash();
        const u64 hpiece = (h & 0x11000000000000f) % rootsize;

        if (this->data[hpiece].k.bm == 0)
            // It's a zero, return null for failure
            return 0;
        else if ((this->data[hpiece].k.bm & 1) == 0)
        {
            // It's a key/value pair, check for equality
            if (*(this->data[hpiece].k.key) == *key)
            {
                return this->data[hpiece].v.val;
            }
            else
                return 0;
        }
        else
            // It's an inner node
            return KVtop::inner_find(this->data[hpiece], h >> 4, key);
    }

    const K **getKeys() const
    {
        // type K must support a method u64 hash() const;
        // const u64 h = key->hash();
        // const u64 hpiece = (h & 0x11000000000000f) % rootsize;
        const K **keyArray = (const K **)GC_MALLOC(count * sizeof(const K *));
        long *numKeysStored = (long *)GC_MALLOC(sizeof(long));
        *numKeysStored = 0;
        for (int i = 0; i < rootsize; i++)
        {
            if (this->data[i].k.bm == 0)
            {
                continue;
            }
            else if ((this->data[i].k.bm & 1) == 0)
            {
                // it's a key value pair
                keyArray[*numKeysStored] = this->data[i].k.key;
                *numKeysStored = *numKeysStored + 1;
            }
            else
            {
                KVtop::inner_get_keys(this->data[i], *numKeysStored, keyArray);
            }
        }
        return keyArray;
    }

    const hamt<K, V> *insert(const K *const key, const V *const val) const
    {
        // type K must support a method u64 hash() const;
        const u64 h = key->hash();
        const u64 hpiece = (h & 0x11000000000000f) % rootsize;

        // Make a copy to return; insert at bucket hpiece
        hamt<K, V> *new_root = (hamt<K, V> *)GC_MALLOC(sizeof(hamt<K, V>));
        std::memcpy(new_root, this, sizeof(hamt<K, V>));
        if (this->data[hpiece].k.bm == 0)
        {
            // the root node has an empty bucket at hpiece
            new (&new_root->data[hpiece]) KVtop(key, val);
            (new_root->count)++;
        }
        else if ((this->data[hpiece].k.bm & 1) == 0)
        {
            // the root node already has a key/value pair at hpiece
            if (*(this->data[hpiece].k.key) == *key)
                new (&new_root->data[hpiece]) KVtop(key, val);
            else
            {
                (new_root->count)++;
                new (&new_root->data[hpiece]) KVtop(KVtop::new_inner_node(this->data[hpiece].k.key->hash() >> 4,
                                                                          this->data[hpiece].k.key,
                                                                          this->data[hpiece].v.val,
                                                                          h >> 4, key, val));
            }
        }
        else
            // the root node has an inner node at index hpiece
            new (&new_root->data[hpiece]) KVtop(KVtop::insert_inner(this->data[hpiece], h >> 4, key, val, &(new_root->count)));

        return new_root;
    }

    const hamt<K, V> *removeFirst(const K **const keyPtr, const V **const valPtr) const
    {
        for (u64 i = 0; i < rootsize; ++i)
        {
            if ((this->data[i].k.bm & 1) == 1)
            {
                const KVtop kv = KVtop::removeFirst_inner(this->data[i], keyPtr, valPtr);
                hamt<K, V> *new_root = (hamt<K, V> *)GC_MALLOC(sizeof(hamt<K, V>));
                std::memcpy(new_root, this, sizeof(hamt<K, V>));
                new (&new_root->data[i]) KVtop(kv);
                new_root->count = this->count - 1;
                return new_root;
            }
            else if (this->data[i].k.bm != 0)
            {
                *keyPtr = this->data[i].k.key;
                *valPtr = this->data[i].v.val;
                return this->remove(*keyPtr);
            }
        }

        return this;
    }

    const hamt<K, V> *remove(const K *const key) const
    {
        // type K must support a method u64 hash() const;
        const u64 h = key->hash();
        const u64 hpiece = (h & 0x11000000000000f) % rootsize;

        if (this->data[hpiece].k.bm == 0)
            return this;
        else if ((this->data[hpiece].k.bm & 1) == 0)
        {
            // the root node already has a key/value pair at hpiece
            // (we turn on the lowest bit to indicate when it is not a K*)
            if (*(this->data[hpiece].k.key) == *key)
            {
                hamt<K, V> *new_root = (hamt<K, V> *)GC_MALLOC(sizeof(hamt<K, V>));
                std::memcpy(new_root, this, sizeof(hamt<K, V>));
                new (&(new_root->data[hpiece])) KVtop((K *)0, (V *)0);
                --(new_root->count);
                return new_root;
            }
            else
                return this;
        }
        else
        {
            // Try a remove_inner and see what comes back
            u64 temp_count = this->count;
            const KVtop kv = KVtop::remove_inner(this->data[hpiece], h >> 4, key, &temp_count);
            if (kv == this->data[hpiece])
                return this;
            else
            {
                // We got back a new inner node and need to produce a new root
                hamt<K, V> *new_root = (hamt<K, V> *)GC_MALLOC(sizeof(hamt<K, V>));
                std::memcpy(new_root, this, sizeof(hamt<K, V>));
                new (&new_root->data[hpiece]) KVtop(kv);
                new_root->count = temp_count;
                return new_root;
            }
        }
    }

    u64 hash_helper(u64 h_val, const K *const key, const V *const val, bool is_set) const
    {
        h_val ^= key->hash() + 0x9e3779b9 + (h_val << 6) + (h_val >> 2);
        if (!is_set)
        {
            h_val ^= val->hash() + 0x9e3779b9 + (h_val << 6) + (h_val >> 2);
        }
        return h_val;
    }

    u64 getHash() const
    {
        // type K must support a method u64 hash() const;
        // const u64 h = key->hash();
        // const u64 hpiece = (h & 0x11000000000000f) % rootsize;
        bool is_set = (cur_type == hamt_ds_type::set_type);
        u64 *h = (u64 *)GC_MALLOC(sizeof(u64));
        *h = 0xcbf29ce484222325;
        for (int i = 0; i < rootsize; i++)
        {
            if (this->data[i].k.bm == 0)
            {
                continue;
            }
            else if ((this->data[i].k.bm & 1) == 0)
            {
                // it's a key value pair
                *h = hash_helper(*h, this->data[i].k.key, this->data[i].v.val, is_set);
            }
            else
            {
                KVtop::inner_get_hash(this->data[i], *h, is_set);
            }
        }
        return *h;
    }

    u64 size() const
    {
        return count;
    }

    hamt_ds_type whatami() const
    {
        return cur_type;
    }
};
