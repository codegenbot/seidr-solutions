def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        return all(x in expression and x != "&" for x in ["T", "&"]) 
    elif "|" in expression:
        return any(x in expression and x != "|" for x in ["T", "|"])
    else:
        return None