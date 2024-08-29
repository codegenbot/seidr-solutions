def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return solve_boolean(left) and solve_boolean(right)
    elif "|" in expression:
        left, right = expression.split("|")
        return solve_boolean(left) or solve_boolean(right)
    else:
        if expression[0] == "(" and expression[-1] == ")":
            expression = expression[1:-1]
        if expression[0] == "T":
            return True
        elif expression[0] == "F":
            return False
        else:
            for char in expression:
                if char in ["|", "&"]:
                    left = expression[: expression.index(char)]
                    right = expression[expression.index(char) + 1 :]
                    if "&" in expression:
                        return solve_boolean(left) and solve_boolean(right)
                    elif "|" in expression:
                        return solve_boolean(left) or solve_boolean(right)