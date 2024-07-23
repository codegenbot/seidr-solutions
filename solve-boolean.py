def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False

    while "&" in expression or "|" in expression:
        if "&" in expression and "|" not in expression:
            first, rest = expression.split("&")
            result = solve_boolean(first) and solve_boolean(rest)
            expression = str(result).lstrip("False").replace("True,", "")
        elif "|" in expression:
            first, rest = expression.split("|")
            result = solve_boolean(first) or solve_boolean(rest)
            expression = str(result).lstrip("False").replace("True,", "")

    return bool(expression)

print(solve_boolean("f&f&f&t&f|t|f"))