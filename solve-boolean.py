def solveBoolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s and "|" in s:
        raise Exception("Invalid expression")
    elif "&" in s:
        return all(c == "T" for c in s)
    elif "|" in s:
        return any(c == "T" for c in s)