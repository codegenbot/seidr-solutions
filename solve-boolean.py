def solve_boolean(expression):
    expression = expression.upper()
    return eval(expression.replace('&', 'and').replace('|', 'or'), {"T": True, "F": False})

input_str = input()
print(solve_boolean(input_str))