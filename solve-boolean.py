```
def solve_boolean(expression):
    while "&" in expression or "|" in expression:
        if "&" in expression:
            a, b = expression.split("&")
            expression = str(bool(a)) + "&"
        elif "|" in expression:
            a, b = expression.split("|")
            expression = str(int(str(bool(a)).lower() == "true") | int(str(bool(b)).lower() == "true"))+"|"
    return bool(expression)