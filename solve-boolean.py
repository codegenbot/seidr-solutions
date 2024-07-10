def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s:
        parts = s.split("&")
        for p in parts:
            if p.strip() != "F":
                return False
        return True
    elif "|" in s:
        parts = s.split("|")
        for p in parts:
            if p.strip() != "F":
                return True
        return False