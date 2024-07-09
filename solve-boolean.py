def solve_boolean():
    user_expression = input("Enter your Boolean expression: ")
    return evaluate_expression(user_expression)


def evaluate_expression(expression):
    if "&" not in expression and "|" not in expression:
        return {"T": True, "F": False}.get(expression, None)

    while "&" in expression and "|" in expression:
        left, right = expression.split("&", 1)
        expression = str(evaluate_expression(left)) + " & "

    if "(" in expression and ")" in expression:
        start = expression.index("(")
        end = expression.index(")")
        sub_expr = evaluate_expression(expression[start + 1 : end])
        return eval(f"({sub_expr})")

    while "&" in expression:
        left, right = expression.split("&", 1)
        expression = str(evaluate_expression(left)) + " & "

    while "|" in expression:
        left, right = expression.split("|", 1)
        expression = str(evaluate_expression(left)) + " or "

    if "&" in expression and not "|" in expression:
        return eval("(" + expression.replace("&", ") and (") + "))")

    if "|" in expression and not "&" in expression:
        while "|" in expression:
            left, right = expression.split("|", 1)
            expression = str(evaluate_expression(left)) + " or "
        return False if expression == "False or " else True

    if "T" in expression or "True" in expression:
        return True
    elif "F" in expression or "False" in expression:
        return False

    if expression.isnumeric():
        return int(expression) == 1
    elif expression.isdigit():
        return bool(int(expression))