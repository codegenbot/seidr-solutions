```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    result = solve_boolean(expression[0])
    while len(expression) > 1:
        operation = expression[0]
        expression = expression[2:]
        if operation == "&":
            result = result and solve_boolean(expression[0])
            expression = expression[1:]
        elif operation == "|":
            result = result or solve_boolean(expression[0])
            expression = expression[1:]
    return result