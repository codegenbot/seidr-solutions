def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False").replace("|", " or ").replace("&", " and ")
    return eval(expression)

input_str = input().strip()
print(solve_boolean(input_str))