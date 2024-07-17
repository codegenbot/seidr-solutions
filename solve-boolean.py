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
                expression = "f" if not val else expression.replace(val, "")
            elif op == "|":
                expression = "t" if val else expression.replace(val, "")
        return expression.lower() == "t"