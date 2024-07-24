def solveBoolean(expression):
    def evalExpression(expression):
        while "|" in expression or "&" in expression:
            if "|" in expression:
                left, right = expression.split("|", 1)
                expression = str(eval(left)) | str(eval(right))
            elif "&" in expression:
                left, right = expression.split("&", 1)
                expression = str(eval(left)) & str(eval(right))
        return eval(expression) == True

    return evalExpression(expression)