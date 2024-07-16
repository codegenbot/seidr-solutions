def middle_character(s):
    length = len(s)
    mid = (length - 1) // 2
    return s[mid] if length % 2 else s[mid:mid+2]