def solve_boolean(expression):
    return eval(expression.replace("&", "and").replace("|", "or"), {}, {})

input_expression = input().strip()
print(solve_boolean(input_expression))