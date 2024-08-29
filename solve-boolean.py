def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        if left.strip() == "":
            return not solve_boolean(right).strip()
        elif right.strip() == "":
            return not solve_boolean(left).strip()
        else:
            return not (solve_boolean(left) and solve_boolean(right))
    elif "|" in expression:
        left, right = expression.split("|")
        if left.strip() == "":
            return solve_boolean(right).strip()
        elif right.strip() == "":
            return solve_boolean(left).strip()
        else:
            return solve_boolean(left) or solve_boolean(right)