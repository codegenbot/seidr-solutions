def solve_boolean(s):
    if s == "t":
        return True
    elif s == "f":
        return False
    elif "&" in s:
        a, b = s.split("&")
        return bool(int(a) and int(b))
    elif "|" in s:
        a, b = s.split("|")
        return bool(int(a) or int(b))