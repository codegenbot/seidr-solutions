def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        for op, val in zip(["&", "|"], [and_, or_]):
            if op in expression:
                a, b = map(str.strip, expression.split(op))
                return eval(f"{a}{op}{b}")
        return None


def and_(a, b):
    return a and b


def or_(a, b):
    return a or b