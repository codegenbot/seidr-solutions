```
def solve_boolean(expression):
    return evaluate_expression(expression)

def evaluate_expression(expression):
    while "&" in expression and "|" in expression:
        op = "&" if "&" in expression else "|"
        left, right = expression.split(op)
        expression = str(evaluate_expression(left)) + op + evaluate_expression(right[1:])

    if "&" in expression:
        left, right = expression.split("&")
        return eval("(" + str(evaluate_expression(left)) + ") and (" + evaluate_expression(right) + ")")

    if "|" in expression:
        left, right = expression.split("|")
        return eval("(" + str(evaluate_expression(left)) + ") or (" + evaluate_expression(right) + ")")

    if "T" in expression:
        return True
    elif "F" in expression:
        return False