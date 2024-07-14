def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s:
        a, b = s.split("&")
        return bool(int(a)) and bool(int(b))
    elif "|" in s:
        a, b = s.split("|")
        return bool(int(a)) or bool(int(b))