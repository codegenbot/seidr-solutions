def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False").replace("|", " | ").replace("&", " & "))

input_str = input()
print(solve_boolean(input_str))