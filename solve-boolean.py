def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        parts = expression.split("&")
        for part in parts:
            if "|" in part:
                values = [x.strip() for x in part.split("|")]
                result &= values[0] == "T" or values[1] == "T"
            else:
                result &= part.strip() == "T"
        return result