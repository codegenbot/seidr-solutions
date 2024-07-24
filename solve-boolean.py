def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s and "|" in s:
        return eval(" ".join(map(str, list(s))))
    elif "&" in s:
        s = s.replace("|", "")
        return eval(" ".join(map(str, list(s)))) & True
    else:
        return eval(" ".join(map(str, list(s))))