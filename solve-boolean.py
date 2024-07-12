def solve_boolean(expression):
    expression = expression.upper()
    expression = expression.replace('&', ' and ')
    expression = expression.replace('|', ' or ')
    return eval(expression, {"T": True, "F": False})

input_str = input()
print(solve_boolean(input_str))