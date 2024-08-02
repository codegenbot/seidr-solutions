def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for char in expression:
            if char == "&":
                result &= bool(next_expression())
            elif char == "|":
                result |= bool(next_expression())
            elif char in ["T", "F"]:
                result = bool(char)
        return result


def next_expression():
    exp = input()
    while "&" in exp or "|" in exp:
        if "&" not in exp and "|" not in exp:
            break
        exp = eval(exp)
    return exp