def solve_boolean(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str:
        return eval("and" + input_str.replace("&", " and"))
    elif "|" in input_str:
        return eval("or" + input_str.replace("|", " or"))