def solve_boolean(bool_exp):
    if bool_exp == "T":
        return True
    elif bool_exp == "F":
        return False
    elif "&" in bool_exp:
        a, b = bool_exp.split("&")
        return bool(a) and bool(b)
    elif "|" in bool_exp:
        a, b = bool_exp.split("|")
        return bool(a) or bool(b)