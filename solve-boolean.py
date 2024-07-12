def solve_boolean(expression):
    return expression.replace("T", "True").replace("F", "False").replace("|", " or ").replace("&", " and ")

input_str = input().strip()
print(eval(solve_boolean(input_str)))