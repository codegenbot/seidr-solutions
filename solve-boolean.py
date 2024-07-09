def solve_boolean(expression):
    if not expression:
        return None
    return eval(
        expression.replace("T", "true")
        .replace("F", "false")
        .replace("|", " or ")
        .replace("&", " and ")
    )


output = solve_boolean(input())
print(output)