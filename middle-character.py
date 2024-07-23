def middle_character(s):
    length = len(s)
    mid = length // 2
    return s[mid - (length % 2) : mid + (length % 2)]