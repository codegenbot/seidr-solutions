def solve_boolean(expression):
    if "&" in expression:
        return eval(f"{expression.replace('&', 'and').replace('|', 'or')}")
    elif "|" in expression:
        parts = expression.split("|")
        for i, part in enumerate(parts):
            while "&" in part:
                parts[i] = f"({part.replace('&', 'and')})"
        return any(solve_boolean(arg) for arg in parts)