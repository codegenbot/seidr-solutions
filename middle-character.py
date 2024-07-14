def middle_character(s):
    length = len(s)
    mid1 = length // 2
    mid2 = length // 2 - 1 if length % 2 else length // 2
    return s[mid2:mid1+1]