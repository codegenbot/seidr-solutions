def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"), {"T": True, "F": False})