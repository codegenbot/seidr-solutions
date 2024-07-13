def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        ops = expression.split("&")
        for op in ops:
            if "T" in op:
                return True
        return False
    elif "|" in expression:
        ops = expression.split("|")
        for op in ops:
            if "T" in op:
                return True
        return False