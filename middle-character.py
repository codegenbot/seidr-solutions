def get_middle(s):
    if len(s) % 2 == 0:
        if s[len(s) // 2 - 1] and s[len(s) // 2 + 1]:
            return s[len(s) // 2 - 1 : len(s) // 2 + 1]
        else:
            return ""
    else:
        if s[len(s) // 2]:
            return s[len(s) // 2]
        else:
            return ""