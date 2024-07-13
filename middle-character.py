def middle_character(s):
    length = len(s)
    mid = length // 2
    return s[mid-1:mid+1] if length % 2 == 0 else str(s[mid])