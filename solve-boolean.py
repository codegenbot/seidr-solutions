def solve_boolean(s):
    s = s.lower()
    if s == "t":
        return True
    elif s == "f":
        return False
    result = solve_boolean(s[0])
    i = 1
    while i < len(s):
        if s[i] == "&":
            result &= solve_boolean(s[i+1])
        elif s[i] == "|":
            result |= solve_boolean(s[i+1])
        i += s[i:].find(")&") + 2