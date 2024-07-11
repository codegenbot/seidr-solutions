def solve_boolean(expression):
    return eval(
        expression.replace("T", "True")
        .replace("F", "False")
        .replace("|", " or ")
        .replace("&", " and ")
    )

expression = input("Enter the boolean expression: ")
print(solve_boolean(expression))