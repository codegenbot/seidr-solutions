def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        for i, c in enumerate(expression):
            if c == '&':
                left = expression[:i]
                right = expression[i+1:]
                return solve_boolean(left) and solve_boolean(right)
            elif c == '|':
                left = expression[:i]
                right = expression[i+1:]
                return solve_boolean(left) or solve_boolean(right)