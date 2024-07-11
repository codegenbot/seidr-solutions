def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise Exception('Invalid expression')
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= (expression.split('&')[0] == 'T')
            elif char == '|':
                result |= (expression.split('|')[0] == 'T')
        return result