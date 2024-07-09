def solve_boolean(expression):
    replacements = {"T": "True", "F": "False", "|": "or", "&": "and"}
    for key, value in replacements.items():
        expression = expression.replace(key, value)
    return eval(expression)

print(solve_boolean(input()))