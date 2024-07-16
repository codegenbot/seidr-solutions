def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = expression[0]
        for i in range(1, len(expression)):
            if expression[i] == "&":
                result &= expression[i - 1] == "T"
            elif expression[i] == "|":
                result |= expression[i - 1] == "T"
    return result