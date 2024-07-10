def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    result = expression[0]
    for op, bit in zip({"&", "|"}[expression[1] == "&"], expression[2:].split()):
        if bit == "T":
            result = (result, True)[op == "&"]
        else:
            result = (result, False)[op == "&"]
    return result