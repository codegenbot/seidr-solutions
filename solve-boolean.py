```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        terms = expression.split("&")
        for term in terms:
            if solve_boolean(term):
                return True
        return False
    elif "|" in expression:
        terms = expression.split("|")
        for term in terms:
            if solve_boolean(term):
                return True
        return False