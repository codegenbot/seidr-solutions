def solve_boolean(expression):
    return eval(expression.replace("t", "true").replace("f", "false").replace("|", " or ").replace("&", " and "))

input_str = input().strip()
print(solve_boolean(input_str))