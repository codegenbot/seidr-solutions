```
def solve_boolean(expression):
    while "&" in expression or "|" in expression:
        while "&" in expression:
            left, right = expression.split("&", 1)
            expression = str(eval(left)) + "&"
        while "|" in expression:
            left, right = expression.split("|", 1)
            expression = str(eval(left)) + "|"

    if "T" in expression or "True" in expression:
        return True
    elif "F" in expression or "False" in expression:
        return False