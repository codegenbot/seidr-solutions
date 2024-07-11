def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise Exception("Invalid Expression")
    else:
        result = True if expression[0] == "t" or expression == "T" else False
        for op in "&|":
            i = expression.find(op)
            if i != -1:
                if op == "&":
                    result &= expression[:i].lower() == "t"
                elif op == "|":
                    result |= expression[:i].lower() == "t"
                expression = expression[i + 1 :]
        return result