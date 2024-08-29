def solve_boolean(s):
    while "&" in s or "|" in s:
        if "&" in s and "|" in s:
            raise ValueError("Invalid expression")
        elif "&" in s:
            a, b = s.split("&")
            s = str(bool(a)) + b
        elif "|" in s:
            a, b = s.split("|")
            s = str(bool(a)) + b
    return eval(s)