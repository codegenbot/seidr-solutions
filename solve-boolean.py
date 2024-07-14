def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    while "&" in expression or "|" in expression:
        if "&" in expression and "|" in expression:
            raise ValueError("Invalid expression")
        elif "&" in expression:
            parts = expression.split("&")
            expression = parts[0].strip().lower() + ("" if all(part.strip().lower() == "t" for part in parts[1:]) else "f")
        elif "|" in expression:
            parts = expression.split("|")
            expression = "t" if any(part.strip().lower() != "f" for part in parts) else "f"
    return expression == "t"