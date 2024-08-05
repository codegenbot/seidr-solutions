```
def solve_boolean(expression):
    result = True if expression == 't' else False
    for char in expression[1:]:
        if char == '|':
            result = result or (True if char == 't' else False)
        elif char == '&':
            result = result and (True if char == 't' else False)
    return result