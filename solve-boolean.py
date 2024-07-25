def solve_boolean(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str and "|" in input_str:
        raise Exception("Invalid expression")
    elif "&" in input_str:
        left, right = input_str.split("&")
        return not bool(input_str[0]) and solve_boolean(right)
    elif "|" in input_str:
        left, right = input_str.split("|")
        return solve_boolean(left) or solve_boolean(right)