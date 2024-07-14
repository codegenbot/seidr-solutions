def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for term in expression.split("&"):
            if any(char not in "TF" for char in term):
                raise ValueError("Invalid expression")
            for char in term:
                if char == "T":
                    result &= True
                elif char == "F":
                    result &= False
                elif char == "|":
                    raise ValueError("Invalid expression")
        return result