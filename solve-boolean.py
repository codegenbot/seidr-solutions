def solveBoolean(bool_exp):
    if bool_exp == "T":
        return True
    elif bool_exp == "F":
        return False
    elif "&" in bool_exp:
        a, b = bool_exp.split("&")
        return bool(a) and bool(b)
    else:
        return eval(bool_exp.replace("T", "True").replace("F", "False"))