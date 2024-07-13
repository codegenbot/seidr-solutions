```
def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "|" in expression:
        left = expression.split("|")[0].strip()
        remaining_expression = expression[len(left)+1:]
        while "|" in remaining_expression:
            left += "|" + remaining_expression.split("|")[0]
            remaining_expression = remaining_expression.split("|")[1]
        return solveBoolean(left) or solveBoolean(remaining_expression)
    elif "&" in expression:
        left, right = expression.split("&")
        return solveBoolean(left) and solveBoolean(right)