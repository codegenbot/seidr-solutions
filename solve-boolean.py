def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid Expression")
    elif "&" in expression:
        return all(term.lower() == "t" for term in expression.split("&"))
    elif "|" in expression:
        return any(term.lower() == "t" for term in expression.split("|"))