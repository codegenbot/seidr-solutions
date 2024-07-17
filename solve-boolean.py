def solve_boolean(bool_exp):
    if bool_exp == "T":
        return True
    elif bool_exp == "F":
        return False
    elif "&" in bool_exp and "&" != bool_exp:
        return all(map(lambda x: x.lower() == "t", bool_exp.split("&")))
    elif "|" in bool_exp and "|" != bool_exp:
        return any(map(lambda x: x.lower() == "t", bool_exp.split("|")))