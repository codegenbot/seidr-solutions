def solve_boolean(expression):
    expression = expression.replace("T", "'True'").replace("F", "'False'")
    return eval(expression.replace("|", " or ").replace("&", " and "))


input_str = input().strip()
print(solve_boolean(input_str))