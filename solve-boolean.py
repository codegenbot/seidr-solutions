def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s:
        a, b = s.split("&")
        return solve_boolean(b) and solve_boolean(a)
    elif "|" in s:
        a, b = s.split("|")
        return solve_boolean(b) or solve_boolean(a)