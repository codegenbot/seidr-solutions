def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = eval("True" if expression[0] == "t" else "False")
        for operator, value in zip(["&", "|"], expression[1:].split()):
            if operator == "&":
                result = result and (value[0] == "t")
            elif operator == "|":
                result = result or (value[0] == "t")
    return result