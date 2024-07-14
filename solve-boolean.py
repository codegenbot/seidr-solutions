def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        for char in expression:
            if char == "&":
                return bool(int(expression.split("&")[0])) and bool(
                    int(expression.split("&")[1])
                )
            elif char == "|":
                return bool(int(expression.split("|")[0])) or bool(
                    int(expression.split("|")[1])
                )