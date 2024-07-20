def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        terms = expression.split("&|")
        result = True
        for term in terms:
            if term != "F":
                result = solve_boolean(term)
                if not result:
                    return False
        return result
    elif "&" in expression:
        terms = expression.split("&")
        for term in terms:
            if term != "F":
                return False
        return True
    elif "|" in expression:
        terms = expression.split("|")
        for term in terms:
            if term != "F":
                return True
        return False