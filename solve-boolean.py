def solve_boolean(s):
    if s == "T":
        return True
    elif s == "F":
        return False
    elif s[0] == "&":
        return s[1:].strip("&") == ""
    else:
        return any(
            bool(s[i + 1].strip("|").startswith("T"))
            for i in range(len(s) - 1)
            if s[i] == "|"
        )