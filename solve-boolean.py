def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = None
        for char in expression:
            if char == '&':
                result = (result and eval(next(char) for next in iter(expression.split('&'))))
            elif char == '|':
                result = (result or eval(next(char) for next in iter(expression.split('|'))))
            elif char in ['T', 'F']:
                return {'T': True, 'F': False}[char]
        return result