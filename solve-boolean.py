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
        if left.lower() == "t":
            left = eval(left)
        else:
            left = eval("not " + left) if left.lower() == "f" else eval(left)
        if right.lower() == "t":
            right = eval(right)
        else:
            right = eval("not " + right) if right.lower() == "f" else eval(right)
        expression = str(left) + " and " + str(right)

    while "|" in expression:
        left, right = expression.split("|", 1)
        if left.lower() == "t":
            left = eval(left)
        else:
            left = eval("not " + left) if left.lower() == "f" else eval(left)
        if right.lower() == "t":
            right = eval(right)
        else:
            right = eval("not " + right) if right.lower() == "f" else eval(right)
        expression = str(left) + " or " + str(right)

    return eval(expression)