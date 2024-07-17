def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        terms = expression.split("&")
        for term in terms:
            if "T" not in term and "F" not in term:
                return False
        return all(solve_boolean(term) for term in terms)
    elif "|" in expression:
        terms = expression.split("|")
        for term in terms:
            if "T" not in term and "F" not in term:
                return True
        return any(solve_boolean(term) for term in terms)