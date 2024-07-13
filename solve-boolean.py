def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True if expression[0] == "T" else False
        for op, value in zip(["&", "|"], [expression[1:], expression]):
            if value[0] in ["T", "F"]:
                result = (
                    result and (value[0] == "T")
                    if op == "&"
                    else result or (value[0] == "T")
                )
            else:
                raise ValueError("Invalid expression")
        return result