def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True if expression[0] == "t" else False
        for op, val in zip(["&", "|"], [expression.index(op), len(expression)]):
            if op == "&":
                result = result and (val == 1 or expression[val + 1 :] == "f")
            elif op == "|":
                result = result or (val == 1 or expression[val + 1 :] == "f")
        return result