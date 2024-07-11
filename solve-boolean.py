def solve(expression):
    expression = expression.upper()
    if "&" in expression:
        left, right = expression.split("&")
        result1 = solve(left)
        result2 = solve(right)
        return result1 and result2
    elif "|" in expression:
        left, right = expression.split("|")
        result1 = solve(left)
        result2 = solve(right)
        return result1 or result2
    else:
        if expression == "T":
            return True
        else:
            return False


expression = input()
while "T" in expression or "F" in expression:
    if "T" in expression:
        expression = expression.replace("T", "")
    else:
        expression = expression.remove_non_boolean_char(expression)

print("Result:", "True" if solve(expression) else "False")