def middle_character(s):
    length = len(s)
    mid_index = (length - 1) // 2 if length % 2 else length // 2
    return s[mid_index] if length % 2 else s[mid_index:mid_index+1]