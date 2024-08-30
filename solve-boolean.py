def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    elif "&" in expression:
        terms = expression.split("&")
        for term in terms:
            if term != "F" and term != "":
                return False
        return True
    elif "|" in expression:
        terms = expression.split("|")
        for term in terms:
            if term != "F" and term != "":
                return True
        return False