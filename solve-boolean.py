def solveBoolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s and "|" in s:
        raise ValueError("Invalid Boolean expression")
    elif "&" in s:
        left, right = s.split("&")
        return not (bool(left) and bool(right))
    elif "|" in s:
        left, right = s.split("|")
        return bool(left) or bool(right)