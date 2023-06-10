#include "gc.h"

void* allocate_function (size_t alloc_size) {
    return GC_malloc(alloc_size);
}

void* reallocate_function (void *ptr, size_t old_size, size_t new_size) {
    return GC_realloc(ptr, new_size);
}
// // Does it work without this.
void deallocate_function (void *ptr, size_t size) {
    // GC_free(ptr);
}