def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"), {}, {"|": lambda x, y: x or y, "&": lambda x, y: x and y})

input_str = input().strip()
print(solve_boolean(input_str))