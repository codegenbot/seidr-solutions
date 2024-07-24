def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid operation")
    else:
        result = True
        while "&&" in expression or "||" in expression:
            expression = expression.replace(
                "&&", str(not (expression[: expression.index("&")] == "t")) and "&"
            )
            expression = expression.replace(
                "||", str((expression[: expression.index("|")] == "t") or "|")
            )
        return eval("True" if expression[0] == "t" else "False")