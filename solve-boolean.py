```
def solve_boolean(expression):
    if "&" in expression:
        return eval(f"{expression.replace('&', 'and').replace('|', 'or')}")
    elif "|" in expression:
        parts = expression.split("|")
        if "&" in parts[0] or "&" in parts[1]:
            return eval(f"( {solve_boolean(parts[0])} and {solve_boolean(parts[1])} )")
        else:
            result = (solve_boolean(parts[0]) or solve_boolean(parts[1]))
            return f"({result})"
    elif "T" in expression.upper():
        return True
    elif "F" in expression.upper():
        return False