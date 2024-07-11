def solve_boolean(expression):
    return eval(
        expression.replace("T", "True")
        .replace("F", "False")
        .replace("|", " or ")
        .replace("&", " and ")
        .replace("t", "T")
        .replace("f", "F")
    )

print(solve_boolean(input()))