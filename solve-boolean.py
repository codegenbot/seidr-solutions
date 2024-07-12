expression = input().strip()

def solve_boolean(expression):
    return eval(
        expression.replace("T", "true")
        .replace("F", "false")
        .replace("|", " or ")
        .replace("&", " and ")
    )

print(solve_boolean(expression))