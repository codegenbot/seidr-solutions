def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        for op, val in re.findall(r"([|&])", expression):
            if op == "&":
                expression = eval(
                    f"({val} and {expression.replace(val, 'T').replace('&', '&')})"
                )
            elif op == "|":
                expression = eval(
                    f"({val} or {expression.replace(val, 'F').replace('|', '|')})"
                )
        return eval(expression)