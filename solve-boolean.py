def solve_boolean(expression):
    return eval(
        expression.replace("T", "'True'")
        .replace("F", "'False'")
        .replace("|", " or ")
        .replace("&", " and ")
    )


expression = input("Enter a Boolean expression using T, F, |, and &: ")
print(solve_boolean(expression))