```
def solve(expression):
    expression = expression.upper()
    while "&" in expression or "|" in expression:
        if "&" in expression:
            left, right = expression.split("&")
            result1 = solve(left)
            result2 = solve(right)
            expression = str(result1 and result2)
        elif "|" in expression:
            left, right = expression.split("|")
            result1 = solve(left)
            result2 = solve(right)
            expression = str(result1 or result2)
    return expression == "TRUE"


expression = input()
print("Result:", "True" if solve(expression) else "False")