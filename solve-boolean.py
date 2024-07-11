def solve_boolean(expression):
    return eval(
        expression.replace("&", "and")
        .replace("|", "or")
        .replace("T", "True")
        .replace("F", "False")
    )

expression = input()
print(solve_boolean(expression))