def solve_boolean(input_str):
    if input_str == "t":
        return True
    elif input_str == "f":
        return False
    elif "&" in input_str and "|" in input_str:
        raise ValueError("Invalid expression")
    elif "&" in input_str:
        a, b = input_str.split("&")
        return not (bool(a) and bool(b))
    elif "|" in input_str:
        a, b = input_str.split("|")
        if "&" in a:
            a = solve_boolean(a)
            b = solve_boolean(b)
            return a & b
        else:
            return bool(a) or bool(b)