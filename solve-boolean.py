def solve_boolean(expression):
    expression = expression.lower().replace("&", " and ").replace("|", " or ")
    return eval(expression, {"t": True, "f": False})

input_str = input()
print(solve_boolean("(" + input_str + ")"))