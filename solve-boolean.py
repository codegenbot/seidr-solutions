def solve_boolean(s):
    s = s.lower()
    if s == "t":
        return True
    elif s == "f":
        return False
    elif s.startswith("("):
        i = 1
        j = 0
        for c in s[1:]:
            if c == "(":
                i += 1
            elif c == ")":
                i -= 1
                if i == 0:
                    return (solve_boolean(s[j+1:s.index(")",j)+1])) and ((solve_boolean(s[s.index(")",j)+1:-1])))
                    j = len(s)
            if i == 0:
                break
        a, b = s[j+3:-2].split("&", 1)
        return solve_boolean(a) and solve_boolean(b)
    elif "|" in s:
        a, b = s.split("|", 1)
        return solve_boolean(a) or solve_boolean(b)
    elif "&" in s:
        a, b = s.split("&", 1)
        return solve_boolean(a) and solve_boolean(b)