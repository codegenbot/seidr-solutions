def solve_boolean(expression):
    expression = expression.replace("&", " and ").replace("|", " or ")

    if expression == "F":
        return False
    elif expression == "T":
        return True
    
    return eval("("+expression+")")