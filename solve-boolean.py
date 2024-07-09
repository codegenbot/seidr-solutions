def solve_boolean(s):
    if s == "t":
        return True
    elif s == "f":
        return False
    elif "&" in s and "|" in s:
        raise ValueError("Invalid expression")
    elif "&" in s:
        return all(c == "t" for c in s)
    elif "|" in s:
        return any(c == "t" for c in s)