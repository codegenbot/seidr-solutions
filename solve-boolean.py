def solveBoolean(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str and "|" in input_str:
        raise ValueError("Invalid expression")
    elif "&" in input_str:
        a, b = input_str.split("&")
        return not (bool(a) and bool(b))
    elif "|" in input_str:
        a, b = input_str.split("|")
        return bool(a) or bool(b)