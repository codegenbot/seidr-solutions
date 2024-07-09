```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    expression = expression.replace("|", "|").replace("&", "&&")
    expressions = expression.split("|")
    result = True
    for expr in expressions:
        if "&&" in expr:
            result &= solve_boolean(expr.strip())
        else:
            result |= solve_boolean(expr.strip())
    return result