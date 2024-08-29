def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid Boolean expression")
    elif "&" in expression:
        parts = expression.split("&")
        for part in parts:
            if part != "F" and not part.startswith("T&"):
                raise ValueError("Invalid Boolean expression")
        return all(part == "T" for part in parts)
    elif "|" in expression:
        parts = expression.split("|")
        for part in parts:
            if part != "F" and not part.startswith("T|"):
                raise ValueError("Invalid Boolean expression")
        return any(part == "T" for part in parts)