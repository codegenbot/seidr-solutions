def solve_boolean(expression):
    return eval(expression.replace("T", "TRUE").replace("F", "FALSE"))


input_str = input()
print(solve_boolean(input_str))