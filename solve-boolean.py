def solve_boolean(expression):
    boolean_map = {"T": True, "F": False, "|": " or ", "&": " and "}
    expression = expression.upper()
    
    for key, value in boolean_map.items():
        if value is True or value is False:
            expression = expression.replace(key, str(value))

    return eval(expression)