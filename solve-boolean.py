def solve(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str:
        left, right = input_str.split("&")
        return solve(left) and solve(right)
    elif "|" in input_str:
        left, right = input_str.split("|")
        return solve(left) or solve(right)