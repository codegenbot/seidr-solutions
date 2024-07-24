def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        return eval(
            " ".join(map(lambda x: str(x) + ("&" if x == "&" else "|"), expression))
        )