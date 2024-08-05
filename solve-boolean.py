def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s:
        return eval(" & ".join(map(str, s)))
    else:
        return eval("|".join(map(str, s)))