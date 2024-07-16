def solveBoolean(expression):
    if expression.strip() == "t":
        return True
    elif expression.strip() == "f":
        return False
    elif "&" in expression:
        left, right = expression.split("&",1)
        return solveBoolean(left).and_(solveBoolean(right))
    elif "|" in expression:
        left, right = expression.split("|",1)
        return solveBoolean(left).or_(solveBoolean(right))