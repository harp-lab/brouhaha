import re

# prelude_items = [
#     '\+', '-', '\*', '=', '/', '>', '<', '>=', '<=',  
    
#     'map', 'foldl', 'foldr', 'take', 'take-helper', 'length', 'filter', 'drop',  'append', 'reverse', 'reverse-helper'
    
#     'even\?', 'odd\?', 'equal\?', 'null\?', 'eq\?', 'hash-has-key\?', 'member\?', 'string\?'
    
#     'hash', 'hash-ref', 'hash-set', 'hash-keys', 'hash-count', 'set->list', 'list->set', 'string->list', 'float->int', 'int->float', 'set-add', 'member', 'cons', 'car', 'cdr', 'string', 'string-length', 'string-ref', 'substring', 'string-append',  'modulo', 'brouhaha_main', 'list', 'set'
# ]


# Reading the source brouhaha file
with open('/brouhaha/tests/transitive_closure/transitive_closure.haha', 'r') as file:
    source_code = file.read()

# used_prelude = []
# for item in prelude_items:
#     if re.search(r'\b' + re.escape(item) + r'\b', source_code):
#         used_prelude.append(item)

# used_prelude = [item for item in prelude_items if re.search(r'\b' + re.escape(item) + r'\b', source_code)]

# used_prelude = [item for item in prelude_items if re.search(r'(?:\W|^)' + re.escape(item) + r'(?:\W|$)', source_code)]

# prelude_items = ['+', '-', 'map', 'foldl', 'even?', 'odd?', '*', 'equal?', 'hash-has-key?',
#                  'hash-ref', 'hash-keys', 'set->list', 'member', 'string', 'null?', '/', '>=', '<=', 'set', 'list',
#                  'brouhaha_main']

prelude_items = [
    '+', '-', '*', '=', '/', '>', '<', '>=', '<=',  
    
    'map', 'foldl', 'foldr', 'take', 'take-helper', 'length', 'filter', 'drop',  'append', 'reverse', 'reverse-helper'
    
    'even?', 'odd?', 'equal?', 'null?', 'eq?', 'hash-has-key?', 'member?', 'string?'
    
    'hash', 'hash-ref', 'hash-set', 'hash-keys', 'hash-count', 'set->list', 'list->set', 'string->list', 'float->int', 'int->float', 'set-add', 'member', 'cons', 'car', 'cdr', 'string', 'string-length', 'string-ref', 'substring', 'string-append',  'modulo', 'brouhaha_main', 'list', 'set'
]





used_prelude = set()

# This function checks if the item is bounded by non-word characters or the start/end of the string
def is_bounded_match(match, item):
    before, after = match.start(), match.end()
    if before > 0 and re.match(r'\w', source_code[before - 1]):
        return False
    if after < len(source_code) - 1 and re.match(r'\w', source_code[after]):
        return False
    return True

# Iterate through prelude items and find matches in the source code
for item in prelude_items:
    matches = re.finditer(re.escape(item), source_code)
    for match in matches:
        if is_bounded_match(match, item):
            used_prelude.add(item)
            break

print(list(used_prelude))