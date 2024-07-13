def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        return expression.split("&")[0] != "F" and expression.split("&")[1] != "F"
    elif "|" in expression:
        return expression.split("|")[0] != "F" or expression.split("|")[1] != "F"