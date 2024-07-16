def solve_boolean(expression):
    boolean_map = {"t|t": True, "f|f": False, "|": " or ", "&": " and "}
    expression = expression.lower()
    
    for key, value in boolean_map.items():
        if key in ["t|t", "f|f"]:
            expression = expression.replace(key, str(value))
      
    expression = expression.replace("|", " or ").replace("&", " and ")

    return eval(expression)