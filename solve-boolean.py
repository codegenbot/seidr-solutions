def solve(input_str):
    if input_str == "t":
        return True
    elif input_str == "f":
        return False
    elif "&" in input_str:
        left, right = input_str.split("&")
        return bool(int(left)) and bool(int(right))
    elif "|" in input_str:
        left, right = input_str.split("|")
        return bool(int(left)) or bool(int(right))