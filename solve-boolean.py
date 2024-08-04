def solve_boolean(expression):
    result = False
    if "|" in expression:
        result = "t" in expression or "T" in expression
    elif "&" in expression:
        result = "t" in expression and "T" in expression
    return result


expression = input()
print(solve_boolean(expression))