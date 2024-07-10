def solve_boolean(expression):
    result = True
    for i, char in enumerate(expression):
        if char == 'T':
            pass
        elif char == 'F':
            return False
        elif char == '&':
            result &= all(c == 'T' for c in expression[i+1:])
        elif char == '|':
            result |= any(c == 'F' for c in expression[:i])
    return result