def evaluate_expression(expression):
    while "(" in expression and ")" in expression:
        start = expression.index("(")
        end = expression.index(")")
        expression = (
            str(evaluate_expression(expression[:start]))
            + ") "
            + str(evaluate_expression(expression[start + 1 : end].strip()))
            + " "
        )

    while "&" in expression:
        left, right = expression.split("&", 1)
        if left == "T":
            left = "True"
        if right == "T":
            right = "True"
        expression = str(evaluate_expression(left)) + " and " + str(evaluate_expression(right))

    while "|" in expression:
        left, right = expression.split("|", 1)
        if left == "T":
            left = "True"
        if right == "T":
            right = "True"
        expression = str(evaluate_expression(left)) + " or " + str(evaluate_expression(right))

    return eval("Boolean(" + expression + ")")