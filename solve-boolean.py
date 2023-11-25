def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "|" in expression:
        return True
    elif "&" in expression:
        return False
    else:
        return None