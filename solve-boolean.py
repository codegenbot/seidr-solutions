def solve_boolean(expression):
    if "(" not in expression and ")" not in expression:
        return True if expression == "T" else False

    expression = expression.replace(" | (", " | T,").replace(" & (", " & F,")

    while "&" in expression and "|" in expression:
        expression = expression.replace("&|", "&&|").replace("|&", "|&&")

    return solve_boolean({k: v for k, v in zip([""], [subexpression.split(",")])}.values()[0].count("T")) % 2 == 1