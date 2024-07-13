def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = eval("True" if expression[0] == "T" else "False")
        for op, val in zip(
            ["&", "|"], [expression.replace("&", ""), expression.replace("|", "")]
        ):
            if val[0] == "T":
                result = eval(f"{result} {op} True")
            elif val[0] == "F":
                result = eval(f"result {op} False")
        return result