def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s and "|" in s:
        raise ValueError("Invalid expression")
    elif "&" in s:
        parts = s.split("&")
        return all(eval(part) for part in parts)
    elif "|" in s:
        parts = s.split("|")
        return any(eval(part) for part in parts)