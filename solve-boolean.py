def solve_boolean(expression):
    replaced_expression = (
        expression.replace("T", "True ")
        .replace("F", "False ")
        .replace("|", " or ")
        .replace("&", " and ")
    )
    return eval(replaced_expression)


# Read input from user
expression = input()
result = solve_boolean(expression)
print(result)