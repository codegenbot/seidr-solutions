def solveBoolean(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str:
        a, b = input_str.split("&")
        return solveBoolean(a) and solveBoolean(b)
    elif "|" in input_str:
        a, b = input_str.split("|")
        return solveBoolean(a) or solveBoolean(b)