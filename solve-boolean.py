```
def solve_boolean():
    user_expression = input("Enter your Boolean expression: ")
    return evaluate_expression(user_expression)

def evaluate_expression(expression):
    if "&" not in expression and "|" not in expression:
        if "T" in expression.upper() or "TRUE" in expression.upper():
            return True
        elif "F" in expression.upper() or "FALSE" in expression.upper():
            return False

    while "&" in expression and "|" in expression:
        while "&" in expression:
            left, right = expression.split("&", 1)
            expression = str(evaluate_expression(left)).replace("True", "T").replace("False", "F") + " & "
        while "|" in expression:
            left, right = expression.split("|", 1)
            expression = left.replace("True", "T").replace("False", "F") + " | " + right.replace("True", "T").replace("False", "F")

    if "&" in expression and "|" not in expression:
        return eval("(" + expression.replace("&", ") and (") + "))")

    if "|" in expression and "&" not in expression:
        while "|" in expression:
            left, right = expression.split("|", 1)
            expression = str(evaluate_expression(left)).replace("True", "T").replace("False", "F") + " or "
        return False if expression == "False or " else True

    if "&" in expression and "|" in expression:
        left, right = expression.split("&")
        return eval(
            "(("
            + str(evaluate_expression(left)).replace("True", "T").replace("False", "F")
            + ") and ("
            + str(evaluate_expression(right)).replace("True", "T").replace("False", "F")
            + "))"
        )

    if "(" in expression:
        end = expression.index(")")
        result = evaluate_expression("(" + expression[:end+1])
        return result

    if expression.isnumeric():
        return int(expression) == 1
    elif expression.isdigit():
        return bool(int(expression))