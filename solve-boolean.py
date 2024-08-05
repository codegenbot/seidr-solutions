def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = eval(
            "True" + ("&" if "&" in expression else "|") + str(int(expression != "F"))
        )
        return bool(result)