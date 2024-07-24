def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True if expression[0] == "T" else False
        for operator, value in zip(
            ["&", "|"],
            [expression[1:].index(operator), len(expression) - len(expression[1:])],
        ):
            if value == 0:
                result = (result and value) if operator == "&" else (result or value)
            elif operator == "&":
                result = result & bool(value == "T")
            else:
                result = result | bool(value == "T")
        return result