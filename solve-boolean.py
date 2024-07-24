def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid input")
    else:
        result = True
        for i in range(0, len(expression), 2):
            if expression[i] == "&":
                result &= expression[i + 1] == "t"
            elif expression[i] == "|":
                result |= expression[i + 1] == "t"
        return result