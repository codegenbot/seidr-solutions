def solve_boolean(s):
    if s == "t":
        return True
    elif s == "f":
        return False
    elif "&" in s and "|" in s:
        raise ValueError("Invalid expression")
    else:
        parts = s.split("&")
        if len(parts) > 1:
            res = all(eval(part.replace("|", "^")) for part in parts)
        else:
            res = eval(s.replace("|", "^"))
        return bool(res)