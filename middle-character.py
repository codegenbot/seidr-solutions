def middle_character(s):
    length = len(s)
    mid_index = length // 1 if length % 2 != 0 else (length - 1) // 2
    return s[mid_index]