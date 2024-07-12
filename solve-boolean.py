def solve_boolean(expression):
    return eval(expression, {"T": True, "F": False, "|": "or", "&": "and"})

input_str = input()
print(solve_boolean(input_str))