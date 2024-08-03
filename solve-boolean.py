def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True if expression[0] == "T" else False
        for op, val in zip(["&", "|"], [expression[1:].index(op), len(expression) - 1]):
            if val > 0:
                if op == "&":
                    result &= val == 0 or expression[val].upper() == "T"
                elif op == "|":
                    result |= val == 0 or expression[val].upper() == "T"
        return result