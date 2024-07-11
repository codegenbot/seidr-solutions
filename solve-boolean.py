def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid Boolean expression")
    else:
        for char in expression:
            if char == "&":
                return bool(int(char) == 0)
            elif char == "|":
                return not bool(int(char) == 0)