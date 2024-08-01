def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        return eval(" and ".join(map(lambda x: str(x), expression.split("&"))))
    elif "|" in expression:
        return eval(" or ".join(map(lambda x: str(x), expression.split("|"))))