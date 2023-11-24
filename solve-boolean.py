def solve_boolean(expression):
    expression = expression.replace("&", " && ").replace("|", " || ")
    result = eval("(" + expression + ")")
    return result