def solve_boolean(expression):
    if "&" in expression:
        return eval(f"{expression.replace('&', 'and').replace('|', 'or')}")
    elif "|" in expression:
        parts = expression.split("|")
        if len(parts) == 1:  
            return expression == "T"
        return any(solve_boolean(part) for part in parts)