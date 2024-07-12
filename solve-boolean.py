def solve_boolean(expression):
    expression = expression.upper().replace("&", " and ").replace("|", " or ")
    return eval(expression, {"T": (True), "F": (False)})


input_str = input()
print(solve_boolean("(" + input_str + ")"))