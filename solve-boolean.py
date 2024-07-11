def solve_boolean(expression):
    return eval(
        expression.replace("T", "true")
        .replace("F", "false")
        .replace("|", " or ")
        .replace("&", " and ")
    )

expression = input()
print(solve_boolean(expression))