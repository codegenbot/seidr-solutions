def solve_boolean(expression):
    return eval(expression.replace("t", "True").replace("f", "False").replace("|", " or ").replace("&", " and "))

input_str = input().strip()
print(solve_boolean(input_str))  