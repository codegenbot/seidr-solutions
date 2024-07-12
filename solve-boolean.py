def solve_boolean(expression):
    return eval(
        expression.replace("t", "True")
        .replace("f", "False")
        .replace("&", "and")
        .replace("|", "or")
    )


expression = input()
print(solve_boolean(expression))