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
            left = True
        elif left == "F":
            left = False
        else:
            left = evaluate_expression(left) is not False

        if right == "T":
            right = True
        elif right == "F":
            right = False
        else:
            right = evaluate_expression(right) is not False

        expression = str(left) + " and " + str(right)

    while "|" in expression:
        left, right = expression.split("|", 1)
        if left == "T":
            left = True
        elif left == "F":
            left = False
        else:
            left = evaluate_expression(left) is not False

        if right == "T":
            right = True
        elif right == "F":
            right = False
        else:
            right = evaluate_expression(right) is not False

        expression = str(left) + " or " + str(right)

    return eval("Boolean(" + str(expression).replace("True", "1").replace("False", "0") + ")")