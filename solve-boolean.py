def solveBoolean(boolExpr):
    if boolExpr == "T":
        return True
    elif boolExpr == "F":
        return False
    elif "&" in boolExpr and "|" in boolExpr:
        raise ValueError("Invalid input: both & and | are used")
    elif "&" in boolExpr:
        a, b = boolExpr.split("&")
        return not (bool(a) ^ bool(b))
    elif "|" in boolExpr:
        a, b = boolExpr.split("|")
        return bool(a) or bool(b)