expression = input().strip()


def evaluate_boolean(expression):
    if "|" in expression:
        return ("t" in expression) or ("T" in expression)
    elif "&" in expression:
        return ("t" in expression) and ("T" in expression)
    elif "t" in expression:
        return True
    else:
        return False


print(evaluate_boolean(expression))