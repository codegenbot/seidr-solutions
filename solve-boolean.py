def solve_boolean(expression):
    mapping = {"T": True, "F": False, "|": "or", "&": "and"}
    for key, value in mapping.items():
        expression = expression.replace(key, str(value))
    return eval(expression)


expression = input()
print(solve_boolean(expression))