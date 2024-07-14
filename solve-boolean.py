def solve_boolean(s):
    if s == "t":
        return True
    elif s == "f":
        return False
    elif "&" in s:
        a, b = s.split("&")
        return not (bool(a[0] == "f") and bool(b[0] == "t"))
    elif "|" in s:
        a, b = s.split("|")
        return bool(a[0] == "t") or bool(b[0] == "t")