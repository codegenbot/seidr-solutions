def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        while "&" in expression or "|" in expression:
            if "&" in expression and "&" not in expression.replace("&", "|"):
                expression = expression.replace("&", "|", 1)
            elif "|" in expression:
                parts = expression.split("|")
                result = all(bool(part.strip("f")) for part in parts)
                return result
        return bool(expression.strip("f"))