```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for term in expression.split('&'):
            if any(char in term for char in '|'):
                result = any(term.count(c) > 0 for c in 'TF')
            else:
                result = (term == 'T')
            if not result:
                break
        return result