def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        if left[-1] == "|":
            left = left[:-1]
        if right[-1] == "|":
            right = right[:-1]
        return solve_boolean(left) and solve_boolean(right)
    elif "|" in expression:
        left, right = expression.split("|")
        if left[-1] == "&":
            left = left[:-1]
        if right[-1] == "&":
            right = right[:-1]
        return solve_boolean(left) or solve_boolean(right)