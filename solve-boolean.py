def solve_boolean(expression):
    replaced_expression = (
        expression.replace("|", "or")
        .replace("&", "and")
        .replace("T", "True")
        .replace("F", "False")
    )
    return eval(replaced_expression)

expression = input()
result = solve_boolean(expression)
print(result)