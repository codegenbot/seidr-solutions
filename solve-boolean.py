def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for op, val in zip(
            ["&", "|"],
            [
                expression.replace("&", "False&").replace("|", "False|"),
                expression.replace("&", "True&").replace("|", "True|"),
            ],
        ):
            if eval(val):
                result = eval(f"result {op} {val}")
        return result