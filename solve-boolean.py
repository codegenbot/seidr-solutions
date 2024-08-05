def solveBoolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        for op, val in re.findall(r"([|&])\(([^)]+)\)", expression):
            left, right = val.split("t")
            if op == "&":
                expression = f"({val} and {left}){' and ' if right else ''}{right}"
            elif op == "|":
                expression = f"({val} or {left}){' or ' if right else ''}{right}"
        return eval(f"bool({expression.strip()})")