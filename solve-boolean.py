def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False").replace("&", " and ").replace("|", " or "))

input_str = input()
print(solve_boolean(input_str))