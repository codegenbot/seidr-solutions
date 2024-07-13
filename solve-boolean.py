def solveBoolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s:
        left, right = s.split("&")
        return not (bool(eval(left)) and bool(eval(right)))
    else:
        return not (bool(eval(s)))