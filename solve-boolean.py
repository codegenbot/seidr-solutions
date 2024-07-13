```
def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression or "|" in expression:
        for op in "&|":
            if op in expression:
                left, right = expression.split(op)
                return bool(solve_boolean(left)) and solveBoolean(right) if op == "&" else bool(solve_boolean(left)) or solve_boolean(right)