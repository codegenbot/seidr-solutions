def solveBoolean(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str:
        left, right = input_str.split("&")
        return not (solveBoolean(left) and solveBoolean(right))
    elif "|" in input_str:
        left, right = input_str.split("|")
        return solveBoolean(left) or solveBoolean(right)