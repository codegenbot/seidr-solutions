def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif "&" in s and "|" in s:
        raise ValueError("Invalid expression")
    else:
        return eval(s.replace("T", "True").replace("F", "False"))