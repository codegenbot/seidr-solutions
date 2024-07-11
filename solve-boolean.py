def solve_boolean(expression):
    return eval("bool(" + expression.replace("T", "True").replace("F", "False").replace("|", ") or (").replace("&", ") and (") + ")", {})