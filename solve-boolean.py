def solve_boolean(expression):
    if "&" in expression:
        return eval(f"{expression.replace('&', 'and').replace('|', 'or')}")
    elif "|" in expression:
        parts = expression.split("|")
        result = (solve_boolean(parts[0]) or solve_boolean(parts[1]))
        return f"({result})"