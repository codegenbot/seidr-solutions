def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    result = True
    for char in expression:
        if char == "&":
            result &= evaluate(char)
        elif char == "|":
            result |= evaluate(char)
    return result


def evaluate(expression):
    if "T" in expression or "t" in expression:
        return True
    elif "F" in expression or "f" in expression:
        return False
    else:
        raise ValueError("Invalid expression")