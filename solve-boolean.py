def solve_boolean(expression):
    boolean_map = {"T|T": True, "F|F": False, "T|t": True, "F|f": False, "|": " or ", "&": " and "}
    expression = expression.upper()
    
    for key, value in boolean_map.items():
        expression = expression.replace(key.upper(), str(value))

    expression = expression.replace("|", " or ").replace("&", " and ")

    return eval(expression)