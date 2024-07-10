def middle_character(s):
    s = s.lower()
    length = len(s)
    mid = length // 2
    if length % 2 == 0:
        return s[mid:mid+2]
    else:
        return s[mid]