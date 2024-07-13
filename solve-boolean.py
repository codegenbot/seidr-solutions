```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    result = eval("".join(["True" if term == "T" else "False" for term in expression.replace("|", " or ").replace("&", " and")]))
    return not result if "&" in expression else result