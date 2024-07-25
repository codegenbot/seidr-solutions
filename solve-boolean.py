def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid Expression")
    result = True if expression == "t" else False if expression == "f" else None
    for op, value in zip(["|", "&"], [True, False]):
        if op in expression:
            if op == "|":
                result = result or (
                    value if expression.replace(op, "").strip() == "T" else not value
                )
            elif op == "&":
                result = result and (
                    value if expression.replace(op, "").strip() == "T" else not value
                )
    return result