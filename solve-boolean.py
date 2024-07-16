def solve_boolean(expression):
    boolean_map = {"T": True, "F": False, "|": " or ", "&": " and "}
    expression = expression.upper()
    
    for key, value in boolean_map.items():
        if key in ["T", "F"]:
            expression = expression.replace(key, str(value))
      
    return eval(expression)