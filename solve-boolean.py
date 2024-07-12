def solve_boolean(expression):
    return eval(
        expression.replace("|", ") | (")
        .replace("&", ") & (")
        .replace("T", "True")
        .replace("F", "False")
    )