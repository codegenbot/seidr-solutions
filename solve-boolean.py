def solve_boolean(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str:
        left, right = input_str.split("&")
        return not (solve_boolean(left) and solve_boolean(right))
    elif "|" in input_str:
        left, right = input_str.split("|")
        return solve_boolean(left) or solve_boolean(right)