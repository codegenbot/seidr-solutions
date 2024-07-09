```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        expression = expression.replace("|", "|").replace("&", "&&")
        expressions = expression.split("|")
        result = True
        for expr in expressions:
            if "&" in expr:
                result &= solve_boolean(expr)
            else:
                result |= solve_boolean(expr)
        return result
    elif "|" in expression:
        expression = expression.replace("&", "&&").replace("|", "|")
        expressions = expression.split("|")
        result = False
        for expr in expressions:
            if "&" in expr:
                result &= solve_boolean(expr)
            else:
                result |= solve_boolean(expr)
        return result
    else:
        if not expression.strip():
            return False
        raise ValueError("Invalid input")