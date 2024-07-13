def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise Exception("Invalid expression")
    elif '&' in expression:
        result = True
        for term in expression.split('&'):
            if not solve_boolean(term):
                result = False
                break
        return result
    elif '|' in expression:
        result = False
        for term in expression.split('|'):
            if solve_boolean(term):
                result = True
                break
        return result