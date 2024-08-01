def solve(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str:
        a, b = input_str.split("&")
        return solve(a) and solve(b)
    elif "|" in input_str:
        a, b = input_str.split("|")
        return solve(a) or solve(b)