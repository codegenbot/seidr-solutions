Here is the solution:

def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression:
        return all(c == 't' for c in expression)
    else:
        return any(c == 't' for c in expression)