Here is the Python code for the problem:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        a, b = expression.split('&')
        return not (solve_boolean(a) and solve_boolean(b))
    elif '|' in expression:
        a, b = expression.split('|')
        return solve_boolean(a) or solve_boolean(b)
    else:
        raise ValueError("Invalid input")