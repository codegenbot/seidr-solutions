def solveBoolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s:
        return eval(s.replace("&", "and"))
    elif "|" in s:
        return eval(s.replace("|", "or"))