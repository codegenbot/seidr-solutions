import re


def solve_boolean():
    user_expression = input("Enter your Boolean expression: ")
    return evaluate_expression(user_expression)


def evaluate_expression(expression):
    if expression.isnumeric():
        return int(expression) == 1
    elif expression.isdigit():
        return bool(int(expression))

    while "&" in expression and "|" in expression:
        expression = re.sub(r"(&|)(\w+)&", r"\1(\2)", expression)
        expression = re.sub(r"(|&)(\w+)\\|\|", r"\1(\2)", expression)

    if "(" in expression:
        end = expression.index(")")
        result = evaluate_expression("(" + expression[: end + 1])
        return result

    while "&" in expression and "|" not in expression:
        left, right = expression.split("&", 1)
        return bool(int(left)) & bool(int(right))

    while "|" in expression and "&" not in expression:
        left, right = expression.split("|", 1)
        return bool(int(left)) | bool(int(right))

    if "T" in expression or "True" in expression:
        return True
    elif "F" in expression or "False" in expression:
        return False

    while "&" in expression and "|" in expression:
        left, right = expression.split("&", 1)
        return eval(
            "("
            + str(evaluate_expression(left))
            + ") and ("
            + str(evaluate_expression(right))
            + ")"
        )

    if "&" in expression and "|" not in expression:
        return eval("(" + expression.replace("&", ") and (") + "))")

    if "|" in expression and "&" not in expression:
        return eval("(" + expression.replace("|", ") or (") + ")")