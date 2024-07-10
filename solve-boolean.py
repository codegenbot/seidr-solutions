def solve_boolean(expression):
    while "|" in expression:
        left, right = expression.split("|", 1)
        expression = str(bool(left) or bool(right))
    return (
        all(c == "T" for c in expression)
        if "&" not in expression
        else eval(" and ".join(["True" if c == "T" else "False" for c in expression]))
    )