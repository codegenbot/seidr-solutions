```
def solve_boolean(expression):
    if not expression.strip():
        return False
    elif expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return solve_boolean(left) and solve_boolean(right)
    elif "|" in expression:
        left, right = expression.split("|")
        if (left == "T" and right != "F") or (right == "T" and left != "F"):
            return True
        elif (left == "F" and right != "T") or (right == "F" and left != "T"):
            return False
        else:
            return solve_boolean(left) or solve_boolean(right)