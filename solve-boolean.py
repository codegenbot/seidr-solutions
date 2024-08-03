def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for operation, value in zip(
            ["&", "|"], [expression.count("&"), expression.count("|")]
        ):
            if value > 0:
                expression = expression.replace(operation, "")
                if operation == "&":
                    result &= value == 1
                elif operation == "|":
                    result |= value == 1
        return result