def middle_character(s):
    s = str(s)
    length = len(s)
    return s[length // 2 - (length % 2):length // 2 + (length % 2)]