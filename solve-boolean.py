def solve_boolean(expression):
    boolean_map = {"T": True, "F": False, "|": "or", "&": "&"}
    expression = expression.upper()
    
    for key, value in boolean_map.items():
        expression = expression.replace(key, str(value) if value in [True, False] else value)
    
    return eval(expression)