def solve_boolean(expression):
    result = True
    for char in expression:
        if char == 'T':
            pass
        elif char == 'F':
            return False
        elif char == '&':
            if 'F' in expression:
                result = False
            else:
                result = True
        elif char == '|':
            result = any('T' in s for s in expression.split('|')) or not 'F' in expression
    return result