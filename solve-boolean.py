```
def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    result = None
    i = 0
    while i < len(expression):
        if expression[i] in "&|":
            if expression[i] == "&":
                result = all(solve_boolean(expression[i+1:expression.index("&", i+1)]).split("&"))
            else:
                result = any(solve_boolean(expr) for expr in expression[i+1:expression.index("|", i+1)].split("|"))
        i += 1
    return result if result is not None else False