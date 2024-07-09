def middle_character(s):
    length = len(s)
    mid = (length - 1) // 2
    return s[mid : mid + 1] if length % 2 else s[mid - 1 : mid]