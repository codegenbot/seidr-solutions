```
def solve_boolean(expression):
    while "&" in expression:
        left, right = expression.split("&")
        expression = str(solve_boolean(left)) & str(solve_boolean(right))
    while "|" in expression:
        left, right = expression.split("|")
        expression = eval("({}) or ({})".format(str(solve_boolean(left)), str(solve_boolean(right))))
    if expression == "T":
        return True
    elif expression == "F":
        return False