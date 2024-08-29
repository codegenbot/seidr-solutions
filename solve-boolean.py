def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        return eval(
            " ".join(map(lambda x: f"({x})" if x in ["&", "|"] else x, expression))
        )
    elif "&" in expression:
        result = True
        for part in expression.split("&"):
            result &= solve_boolean(part.strip())
        return result
    elif "|" in expression:
        result = False
        for part in expression.split("|"):
            result |= solve_boolean(part.strip())
        return result