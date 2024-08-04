def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        ops = {"&": lambda x, y: x and y, "|": lambda x, y: x or y}
        values = list(map({"T": True, "F": False}.get, expression))
        for i, op in enumerate(["&", "|"]):
            if op in expression:
                result = ops[op](values[i], values[i + 1])
                return result