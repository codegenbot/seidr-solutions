```
def evaluate_expression(expression):
    while "&" in expression:
        left, right = expression.split("&", 1)
        if all(x in ["T", "True"] for x in [left, right]):
            return "True"
        elif all(x in ["F", "False"] for x in [left, right]):
            return "False"
        else:
            expression = left + " and " + right

    while "|" in expression:
        left, right = expression.split("|", 1)
        if all(x in ["T", "True"] for x in [left, right]):
            return "True"
        elif all(x in ["F", "False"] for x in [left, right]):
            return "False"
        else:
            expression = left + " or " + right

    if "T" in expression:
        return "True"
    else:
        return "False"