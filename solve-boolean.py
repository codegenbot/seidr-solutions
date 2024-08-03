def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        for op, val in zip(["&", "|"], [lambda x, y: x and y, lambda x, y: x or y]):
            if op * 2 in expression:
                a, b = expression.split(op)
                return eval(f"{val}({a}, {b})")