def solve_boolean(expression):
    return eval(
        expression.replace("T", "True")
        .replace("F", "False")
        .replace("|", ") or (")
        .replace("&", ") and (")
        .join("()")
    , {"__builtins__": None})