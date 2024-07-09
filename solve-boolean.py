```
def solve_boolean(expression):
    while "&" in expression or "|" in expression:
        if "&" in expression:
            a, b = expression.split("&")
            expression = str(bool(a)) + "&"
        elif "|" in expression:
            a, b = expression.split("|")
            expression = str(bool(a)) + "|"
        else:
            break
    return expression.replace("True", "t").replace("False", "f") == "t"