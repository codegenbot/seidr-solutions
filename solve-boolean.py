def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    result = True
    for char in expression:
        if char == "&":
            result &= evaluate_bool(char)
        elif char == "|":
            result |= evaluate_bool(char)
    return result


def evaluate_bool(char):
    if char == "t":
        return True
    elif char == "f":
        return False