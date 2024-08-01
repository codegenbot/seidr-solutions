def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid operation")
    result = True if expression[0] == "T" else False
    for op, value in zip(["&", "|"], [result, not result]):
        while op * 2 + 1 in expression:
            expression = expression.replace(op * 2 + 1, str(not not bool(value)))
    return eval(expression)