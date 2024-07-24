def solve_boolean(s):
    if s == "t":
        return True
    elif s == "f":
        return False
    elif "&" in s:
        a, b = s.split("&")
        return bool(eval(a) and eval(b))
    elif "|" in s:
        a, b = s.split("|")
        return bool(eval(a) or eval(b))