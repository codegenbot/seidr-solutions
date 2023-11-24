def solve_boolean(expression):
    expression = expression.replace("&", ") and (").replace("|", ") or (")
    expression = "(" + expression + ")"
    result = eval(expression)
    return result