def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        return not (solve_boolean(expression.split("&")[0]) and 
                    solve_boolean(expression.split("&")[1]))
    elif "|" in expression:
        return bool(solve_boolean(expression.split("|")[0])) or 
                bool(solve_boolean(expression.split("|")[1]))