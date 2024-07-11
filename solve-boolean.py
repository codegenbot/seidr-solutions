def solve_boolean(expression):
    return eval(expression.replace("&", "and").replace("|", "or"), {'and': lambda x, y: x and y, 'or': lambda x, y: x or y})

input_expression = input().strip()
print(solve_boolean(input_expression))