def middle_character(s):
    length = len(s)
    mid = length // 2 + length % 2
    return s[mid-1:mid]