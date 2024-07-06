def get_middle(s):
    if len(s) % 2 == 0 or len(s) % 2 == 1:
        return s[len(s) // 2]
    else:
        return s[::2]