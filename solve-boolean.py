def solve(input_str):
    if input_str == "t":
        return True
    elif input_str == "f":
        return False
    elif "&" in input_str:
        ops = input_str.split("&")
        return all(eval("T" if op else "F") for op in ops)
    elif "|" in input_str:
        ops = input_str.split("|")
        return any(eval("T" if op else "F") for op in ops)