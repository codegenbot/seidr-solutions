def solveBoolean(input_str):
    if input_str == "t":
        return True
    elif input_str == "f":
        return False
    elif "&" in input_str:
        a, b = input_str.split("&")
        return bool(a) and bool(b)
    elif "|" in input_str:
        a, b = input_str.split("|")
        return bool(a) or bool(b)