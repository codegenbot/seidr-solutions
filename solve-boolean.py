def solve_boolean(expression):
    return evaluate_expression(expression)

def evaluate_expression(expression):
    if "(" in expression:
        end = expression.index(")")
        return evaluate_expression("(" + expression[:end+1])

    while "&" in expression and "|" in expression:
        while "&" in expression:
            left, right = expression.split("&", 1)
            expression = str(evaluate_expression(left)) + "&"
        while "|" in expression:
            left, right = expression.split("|", 1)
            expression = str(evaluate_expression(left)) + "|"

    if "&" in expression or "|" in expression:
        left, right = expression.split("&")
        return eval("(" + str(evaluate_expression(left)) + ") and (" + evaluate_expression(right) + ")")

    if "|" in expression:
        left, right = expression.split("|")
        return eval("(" + str(evaluate_expression(left)) + ") or (" + evaluate_expression(right) + ")")

    if "T" in expression or "True" in expression:
        return True
    elif "F" in expression or "False" in expression:
        return False