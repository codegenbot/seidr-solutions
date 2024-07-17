def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        for op in ["&", "|"]:
            if op * 2 in expression:
                left, right = expression.split(op)
                left = left.strip()
                right = right.strip()
                if op == "&":
                    return solve_boolean(left) and solve_boolean(right)
                elif op == "|":
                    return solve_boolean(left) or solve_boolean(right)