def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        operands = expression.split("&")
        for operand in operands:
            if operand != "F":
                return False
        return True
    elif "|" in expression:
        operands = expression.split("|")
        for operand in operands:
            if operand != "F":
                return True
        return False