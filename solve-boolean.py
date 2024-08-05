def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        for i in range(len(expression)):
            if expression[i] == "&":
                return eval("({} & {})".format(expression[:i], expression[i + 1 :]))
            elif expression[i] == "|":
                return eval("({} | {})".format(expression[:i], expression[i + 1 :]))