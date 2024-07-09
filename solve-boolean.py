```
def evaluate_expression(expression):
    if "&" in expression:
        while "&" in expression:
            left, right = expression.split("&", 1)
            expression = str(evaluate_expression(left)) + " & "
        return eval("(" + expression.replace("&", ") and (") + "))")
    elif "|" in expression:
        while "|" in expression:
            left, right = expression.split("|", 1)
            expression = left + " | " + str(evaluate_expression(right))
        if expression == "False":
            return False
        else:
            return True