def solve(input_string):
    if input_string == "t":
        return True
    elif input_string == "f":
        return False
    elif "&" in input_string:
        a, b = map(bool, input_string.split("&"))
        return a and b
    elif "|" in input_string:
        a, b = map(bool, input_string.split("|"))
        return a or b