def solve_boolean(expression):
    result = True if expression == "t" else False
    for char in expression[1:]:
        if char == "&":
            result = result and (expression[0] == "t")
        elif char == "|":
            result = result or (expression[0] == "t")
    return result