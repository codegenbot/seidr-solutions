```
def solve_boolean(s):
    s = s.lower()
    if s == "t":
        return True
    elif s == "f":
        return False
    elif "|" in s:
        while "|" in s:
            a, b = s.split("|", 1)
            s = str(solve_boolean(a)) + "|"
        a, b = s.split("|", 1)
        return eval("({0} or {1})".format(str(solve_boolean(a)), str(solve_boolean(b))))
    elif "&" in s:
        while "&" in s:
            a, b = s.split("&", 1)
            s = str(solve_boolean(a)) + "&"
        a, b = s.split("&", 1)
        return eval("({0} and {1})".format(str(solve_boolean(a)), str(solve_boolean(b))))