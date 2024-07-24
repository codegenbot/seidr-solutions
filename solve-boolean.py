def solve_boolean(s):
    s = s.replace("&", "and").replace("|", "or")
    return eval("True" if s == "t" else "False" if s == "f" else eval(s))