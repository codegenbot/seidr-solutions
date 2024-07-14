```
def solve_boolean(boolean_expression):
    boolean_values = {"T": True, "F": False}
    operators = {"|": lambda a, b: a or b, "&": lambda a, b: a and b}

    tokens = re.split("([|&])", boolean_expression)
    tokens = [token for token in tokens if token != ""]

    result = boolean_values[tokens[0]]
    for i in range(len(tokens) - 1):
        result = operators[tokens[i+1]](result, boolean_values[tokens[i+2]])

    return result