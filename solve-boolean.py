def solve_boolean(input_string):
    if input_string == "T":
        return True
    elif input_string == "F":
        return False
    elif "&" in input_string and "|" in input_string:
        raise ValueError("Invalid expression")
    elif "&" in input_string:
        left, right = input_string.split("&")
        return not (bool(left) and bool(right))
    elif "|" in input_string:
        left, right = input_string.split("|")
        return bool(left) or bool(right)