def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        for op, v in zip(["|", "&"], [True, False]):
            if op * 2 not in expression:
                break
        result = eval(
            expression.replace("T", "True")
            .replace("F", "False")
            .replace("&", "*")
            .replace("|", "+")
        )
        return result