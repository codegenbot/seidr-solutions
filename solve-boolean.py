def solve_boolean(expression):
    result = True if expression == 't' else False
    
    for char in expression[1:]:
        if char == '&':
            result &= (expression[0] == 't')
        elif char == '|':
            result |= (expression[0] == 't')
    
    return result