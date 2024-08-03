def solve(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str:
        a, b = map(bool, input_str.split("&"))
        return a and b
    elif "|" in input_str:
        a, b = map(bool, input_str.split("|"))
        return a or b