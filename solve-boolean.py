def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise Exception("Invalid Expression")
    else:
        return eval("".join(map(lambda x: str(x), expression)))