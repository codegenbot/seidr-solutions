def solve_boolean(expression):
    expression = (
        expression.replace("T", "True")
        .replace("F", "False")
        .replace("|", "or")
        .replace("&", "and")
    )
    return eval(expression)


input_expression = input()
print(solve_boolean(input_expression))