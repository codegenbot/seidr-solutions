def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    
    while "&" in expression or "|" in expression:
        expression = expression.replace("|", "|")
        expression = expression.replace("&", "& |")
    
    if "|" in expression:
        return any(expression.split("|"))
    else:
        return all(expression.split("&"))