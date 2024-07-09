def solve_boolean(expression):
    if expression.strip() in ["T", "t"]:
        return True
    elif expression.strip() in ["F", "f"]:
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return solve_boolean(left) and solve_boolean(right)
    elif "|" in expression:
        left, right = expression.split("|")
        return solve_boolean(left) or solve_boolean(right)
    else:
        raise ValueError("Invalid input")