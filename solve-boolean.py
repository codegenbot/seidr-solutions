def solveBoolean(expression):
    while "&" in expression:
        left, right = expression.split("&")
        expression = str(eval(left)) + "&"
    while "|" in expression:
        left, right = expression.split("|")
        if str(eval(left)):
            return True
        expression = "f|"
    return str(eval(expression))