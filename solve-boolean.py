def solve_boolean(expression):
    if "&" in expression:
        return eval(f"({expression.replace('&', 'and').replace('|', 'or')})")
    elif "|" in expression:
        parts = expression.split("|")
        result = all(solve_boolean(part) for part in parts)
        return f"({result})"