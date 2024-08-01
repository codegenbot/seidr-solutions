def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid input")
    else:
        for i in range(len(expression)):
            if expression[i] == "&":
                a = expression[:i]
                b = expression[i + 1 :]
                return solve_boolean(a) and solve_boolean(b)
            elif expression[i] == "|":
                a = expression[:i]
                b = expression[i + 1 :]
                return solve_boolean(a) or solve_boolean(b)
    return True