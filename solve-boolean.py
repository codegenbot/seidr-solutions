def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    result = True
    for char in expression:
        if char == "&":
            result &= True
        elif char == "|":
            result |= True
        elif char.upper() == "T":
            result &= True
        else:
            result &= False
    return result