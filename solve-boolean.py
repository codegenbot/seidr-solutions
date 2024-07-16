def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    elif "&" in expression:
        result = True
        parts = expression.split("&")
        for part in parts:
            if part != 'T':
                result = False
                break
        return result
    elif "|" in expression:
        a, b = expression.split("|")
        return bool(a) or bool(b)