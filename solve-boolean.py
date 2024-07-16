```
def solve_boolean(expression):
    result = True if expression[0] == 'T' else False
    for char in expression[1:]:
        if char == '&':
            result &= (True if next(c) == 'T' else False)
        elif char == '|':
            result |= (True if next(c) == 'T' else False)
        next(c)
    return result