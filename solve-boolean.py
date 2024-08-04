def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        for op in '|&':
            if op in expression:
                left, right = expression.split(op)
                return solve_boolean(left) and op == '&' or solve_boolean(left) or op == '|'
        return True