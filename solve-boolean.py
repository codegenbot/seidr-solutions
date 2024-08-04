def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s and "|" in s:
        raise ValueError("Invalid expression")
    else:
        if "&" in s:
            left, right = s.split("&")
            return not bool(solve_boolean(left)) or solve_boolean(right)
        elif "|" in s:
            left, right = s.split("|")
            return bool(solve_boolean(left)) and solve_boolean(right)
        else:
            raise ValueError("Invalid expression")