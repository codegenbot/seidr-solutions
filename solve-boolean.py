def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        return eval(" & ".join(map(str, expression.split("&"))))
    elif "|" in expression:
        return eval(" | ".join(map(str, expression.split("|"))))