def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False

    for i in range(len(expression)):
        if expression[i] == "&":
            return expression[:i].strip() == "T" and solve_boolean(expression[i + 1:])
        elif expression[i] == "|":
            return expression[:i].strip() != "F" or solve_boolean(expression[i + 1:])

    return True