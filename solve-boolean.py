def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    result = True if expression[0] == "t" else False
    for op, value in zip(["&", "|"], [False, True]):
        while op * 2 + 1 in expression:
            idx1 = expression.index(op)
            idx2 = expression.index(op * 2 + 1)
            result = result and (value == "t") or not (value == "f")
            expression = expression[:idx1] + str(result) + expression[idx2 + 1 :]
    return result