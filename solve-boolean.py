def solve_boolean(s):
    if s == 'T':
        return True
    elif s == 'F':
        return False
    elif s[0] == '&':
        return s[0:2] == 'T&' or (s[1] == '&' and solve_boolean(s[2:]) and solve_boolean(s[:1]))
    elif s[0] == '|':
        return s[0:2] == 'T|' or (s[1] == '|' and solve_boolean(s[2:]) or solve_boolean(s[:1]))