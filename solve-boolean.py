def solve_boolean(s):
    s = s.lower()
    if s == "t":
        return True
    elif s == "f":
        return False
    elif "&" in s:
        a, b = s.split("&")
        return bool(int(a)) and bool(int(b))
    elif "|" in s:
        a, b = s.split("|")
        return bool(int(a)) or bool(int(b))