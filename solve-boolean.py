def solveBoolean(bool_exp):
    if bool_exp == "T":
        return True
    elif bool_exp == "F":
        return False
    elif "&" in bool_exp:
        return bool_exp.split("&")[0] != "F" and bool_exp.split("&")[1] != "F"
    else:
        return bool_exp != "F"