def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        op = None
        for char in expression:
            if char == "T":
                result = True
            elif char == "F":
                result = False
            elif char == "&":
                op = lambda x, y: x and y
            elif char == "|":
                op = lambda x, y: x or y
        return eval("result" + str(op)(True, False))