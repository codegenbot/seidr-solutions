def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return bool(solve_boolean(left)) and bool(solveBoolean(right))
    elif "| " in expression:
        left, right = expression.split("| ")
        return bool(solveBoolean(left)) or bool(solveBoolean(right))
    else: 
        return True if expression == "T" else False