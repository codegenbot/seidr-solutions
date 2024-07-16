def middle_character(s):
    length = len(s)
    mid1 = length // 2 - 1
    mid2 = length // 2
    if length % 2 == 0:
        return s[mid1:mid2+1]
    else:
        return s[mid1]