def solve_boolean(expression):
    return eval(expression, {"T": True, "F": False, "|": "|", "&": "&"})


input_str = input()
print(solve_boolean(input_str))