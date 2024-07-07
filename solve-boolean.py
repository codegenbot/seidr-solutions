def solve_boolean(expression):
    if len(expression) == 1:
        return True
    else:
        left = expression[0]
        right = expression[-1]
        return solve_boolean(left) and solve_boolean(right)