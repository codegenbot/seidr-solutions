def solve_boolean(expression):
    return eval(
        expression.replace("T", "true")
        .replace("F", "false")
        .replace("|", " or ")
        .replace("&", " and "),
        {"true": True, "false": False},
    )

output = solve_boolean(input())
print(output)