def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False").replace("|", " or ").replace("&", " and "))

input_exp = input()
print(solve_boolean(input_exp))