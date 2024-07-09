```
def solve_boolean():
    user_expression = input("Enter your Boolean expression: ")
    return evaluate_expression(user_expression)

def evaluate_expression(expression):
    if "&" in expression and "|" in expression:
        left, right = expression.split("&")
        return eval("(" + str(evaluate_expression(left)) + ") and (" + str(evaluate_expression(right)) + "))")

    while "&" in expression and "|" in expression:
        while "&" in expression:
            left, right = expression.split("&", 1)
            expression = str(evaluate_expression(left)) + " & "
        while "|" in expression:
            left, right = expression.split("|", 1)
            expression = left + " | " + right

    if "&" in expression and "|" not in expression:
        return eval("(" + expression.replace("&", ") and (") + "))")

    if "|" in expression and "&" not in expression:
        while "|" in expression:
            left, right = expression.split("|", 1)
            expression = str(evaluate_expression(left)) + " or "
        return False if expression == "False or " else True

    if "&" in expression:
        left, right = expression.split("&")
        return eval("(" + str(evaluate_expression(left)) + ") and (" + str(evaluate_expression(right)) + "))")

    if "|" in expression:
        while "|" in expression:
            left, right = expression.split("|", 1)
            expression = str(evaluate_expression(left)) + " or "
        return False if expression == "False or " else True

    if "T" in expression or "True" in expression:
        return True
    elif "F" in expression or "False" in expression:
        return False