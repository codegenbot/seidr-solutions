def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        while "&" in expression:
            left, right = expression.split("&", 1)
            expression = str(solve_boolean(left)) and str(solve_boolean(right))
        return eval(expression.replace("|", "==").replace("T", "True").replace("F", "False"))
    elif "|" in expression:
        while "|" in expression:
            left, right = expression.split("|", 1)
            expression = str(solve_boolean(left)) or str(solveBoolean(right))
        return eval(expression.replace("&", "==").replace("T", "True").replace("F", "False"))