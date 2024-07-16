def solve_boolean(expression):
    result = True if expression[0] == 'T' else False
    for char in expression[1:]:
        if char == '&':
            result &= (result)
        elif char == '|':
            result |= (result != result)
    return result