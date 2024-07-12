expression = input().strip()

def solve_boolean(expression):
    mapping = {"T": "True", "F": "False", "|": " or ", "&": " and "}
    converted_expression = "".join(mapping.get(char, char) for char in expression)
    return eval(converted_expression)

print(solve_boolean(expression))