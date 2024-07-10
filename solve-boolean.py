def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s:
        return eval(s.replace("&", " and "))
    else:
        return eval(s.replace("|", " or "))