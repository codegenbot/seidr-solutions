def solve_boolean(expression):
    return eval(
        expression.replace("t", "True")
        .replace("f", "False")
        .replace("|", " or ")
        .replace("&", " and ")
    , {"__builtins__": None}) == True