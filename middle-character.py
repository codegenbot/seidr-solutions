def middle_character(s):
    s = str(s)
    length = len(s)
    if length % 2 == 0:
        return s[length//2]
    else:
        return s[length//2]