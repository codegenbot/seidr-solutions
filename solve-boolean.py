def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        operators = {"&": lambda x, y: x and y, "|": lambda x, y: x or y}
        result = eval(" ".join(map(str, map(operators.get, expression))))
        return result