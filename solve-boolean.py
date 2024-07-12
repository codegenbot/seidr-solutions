def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"), {"True": True, "False": False})

input_str = input()
print(solve_boolean(input_str))