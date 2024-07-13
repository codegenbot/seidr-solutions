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
                result &= (
                    True if expression[expression.index(char) + 1] == "T" else False
                )
            elif char == "|":
                result |= (
                    True if expression[expression.index(char) + 1] == "T" else False
                )
        return result