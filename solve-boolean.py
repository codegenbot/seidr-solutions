def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"), {'True': True, 'False': False})

print(solve_boolean(input()))