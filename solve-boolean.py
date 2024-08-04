```
def solve_boolean(expression):
    result = True if expression == 't' else False
    for char in expression[1:]:
        if char == '&':
            result &= (result and ('t' == char.lower()))
        elif char == '|':
            result |= (result or ('t' == char.lower()))
    return result