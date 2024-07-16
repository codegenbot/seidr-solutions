def solve_boolean(expression):
    boolean_map = {"T": True, "F": False, "T|T": True, "F|F": False, "|": " or ", "&": " and ", 't': True, 'f': False}
    expression = expression.upper()
    
    for key, value in boolean_map.items():
        if key in ["T", "F", "T|T", "F|F", 't', 'f']:
            expression = expression.replace(key, str(value))
    
    expression = expression.replace("|", " or ").replace("&", " and ")

    return eval(expression)