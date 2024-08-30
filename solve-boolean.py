def solve_boolean(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str and "|" in input_str:
        raise ValueError("Invalid expression")
    else:
        result = eval("True" + input_str.replace("&", "and").replace("|", "or"))
        return result