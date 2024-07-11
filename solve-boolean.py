def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"))


input_str = input().strip()
output = solve_boolean(input_str)
print(output)