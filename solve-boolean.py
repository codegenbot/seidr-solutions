def solve_boolean(expression):
    boolean_map = {"T|T": True, "F|F": False, "|": " or ", "&": " and "}
    expression = expression.upper()
    
    for key, value in boolean_map.items():
        if key in ["T|T", "F|F"]:
            expression = expression.replace(key, str(value))
      
    expression = expression.replace("|", " or ").replace("&", " and ")

    return eval(expression)