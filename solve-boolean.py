def solve_boolean(s):
    s = s.lower()
    if s == "t":
        return True
    elif s == "f":
        return False
    elif s.startswith("("):
        i = 1
        j = len(s) - 1
        while i < j:
            if s[i] == "(":
                i += 1
            elif s[j] == ")":
                j -= 1
            else:
                break
        return solve_boolean(s[1:i]) or solve_boolean(s[i+1:j])
    elif "|" in s:
        a, b = s.split("|", 1)
        return solve_boolean(a) or solve_boolean(b)
    elif "&" in s:
        a, b = s.split("&", 1)
        return solve_boolean(a) and solve_boolean(b)