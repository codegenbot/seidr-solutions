def solve_boolean(expression):
    while "|" in expression:
        left, right = expression.split("|", 1)
        expression = "(" + str(bool(left) or bool(right)) + ")"
    return eval(" " + ("T" if expression == "True" else "False") + " ")