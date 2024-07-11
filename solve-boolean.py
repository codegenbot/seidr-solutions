def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    while "|" in expression or "&" in expression:
        if "&" in expression and "|" in expression:
            expression = expression.replace("&", "|&|")
        elif "&" in expression:
            expression = expression.replace("&", "|&")
        else:
            expression = expression.replace("|", "&|")
    return True if expression == "TTT" else False