def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        for operation, value in zip(
            ["&", "|"], [lambda x, y: x and y, lambda x, y: x or y]
        ):
            if operation in expression:
                values = expression.split(operation)
                return value(eval(values[0]), eval(values[1]))