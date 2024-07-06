def get_middle(s):
    if len(s) % 2 == 0:
        return s[len(s) // 2 - 1 : len(s) // 2 + 2]
    elif len(s) < 2:
        return ""
    else:
        return s[len(s) // 2]