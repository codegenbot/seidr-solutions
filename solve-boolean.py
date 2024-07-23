def solve_boolean(expression):
    return eval(expression.replace("&", " and ").replace("|", " or ").replace("T", "True").replace("F", "False"), None, {"True": True, "False": False})