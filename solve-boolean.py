def solve_boolean(expression):
    if "&" in expression:
        left, right = expression.split("&")
        return "True" if (left == "T" and right == "T") else "False"
    elif "|" in expression:
        left, right = expression.split("|")
        return "True" if (left == "T" or right == "T") else "False"