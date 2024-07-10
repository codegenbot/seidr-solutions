def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        for i in range(len(expression) - 1):
            if expression[i] in ["&", "|"] and (
                expression[i - 1] not in ["T", "F"]
                or expression[i + 1] not in ["T", "F"]
            ):
                return False
        if "&" in expression:
            return all(c == "T" for c in expression)
        else:
            return any(c == "T" for c in expression)