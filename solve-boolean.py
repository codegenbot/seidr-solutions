def solve_boolean(expression):
    result = True
    for i, char in enumerate(expression):
        if char == 'T':
            pass
        elif char == 'F':
            return False
        elif char == '&':
            result = all(char == 'T' for char in expression[i+1:])
        elif char == '|':
            result = any(char == 'F' for char in expression[:i])
    return result