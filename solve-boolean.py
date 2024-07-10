def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for op, value in zip(
            ["&", "|"], [expression.count("&"), expression.count("|")]
        ):
            if value > 0:
                if op == "&":
                    result &= value == int(value)
                elif op == "|":
                    result |= value > 0
                else:
                    raise ValueError("Invalid expression")
        return result