```
def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    while "&" in expression or "|" in expression:
        if "&" in expression:
            left, right = expression.split("&", 1)
        else:
            left, right = expression.split("|", 1)

        if left.strip() == "T" and right.strip() == "":
            return True
        elif left.strip() == "F" and right.strip() == "":
            return False

        result = solveBoolean(left.strip())
        if result is not None:
            expression = right.strip()
        else:
            break
    if "&" in expression or "|" in expression:
        if "&" in expression:
            left, right = expression.split("&", 1)
        else:
            left, right = expression.split("|", 1)

        if left.strip() == "T" and right.strip() == "":
            return True
        elif left.strip() == "F" and right.strip() == "":
            return False

        result = solveBoolean(left.strip())
        if result is not None:
            expression = right.strip()
        else:
            break

    if "&" in expression or "|" in expression:
        if "&" in expression:
            left, right = expression.split("&", 1)
        else:
            left, right = expression.split("|", 1)

        if left.strip() == "T":
            return True
        elif left.strip() == "F":
            return False

    result = solveBoolean(left)
    if expression != "":
        return result or solveBoolean(expression)
    return result or True

print(solveBoolean("f|t|t&t&f&f|f|t&f&t"))