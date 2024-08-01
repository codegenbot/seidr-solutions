def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for op, val in zip(["&", "|"], [False, True]):
            while op * 2 in expression:
                if val:
                    expression = expression.replace(op * 2, "T")
                else:
                    expression = expression.replace(op * 2, "F")
        return eval("True" if expression == "T" else "False")