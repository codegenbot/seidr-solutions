def solve_boolean(expression):
    expression = expression.upper().replace('&', ' and ').replace('|', ' or ')
    return eval(expression, {"T": True, "F": False})

input_str = input().replace('T', 'True').replace('F', 'False')
print(eval(input_str))