def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False

    while "&" in expression or "|" in expression:
        for op in ["&", "|"]:
            if op in expression and expression.count(op) > 1:
                expressions = expression.split(op)
                result = {op: lambda a, b: a and b}[op](*[bool(s) == "t" for s in expressions])
                expression = str(result)

    return expression == "t"