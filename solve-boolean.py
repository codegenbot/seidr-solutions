def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    else:
        for op in "|&":
            if op in expression:
                left, right = expression.split(op)
                return solve_boolean(left) and (op == "|" or not solve_boolean(right))
        return True