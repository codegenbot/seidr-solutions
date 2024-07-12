def middle_character(s):
    length = len(s)
    mid_index = (length + 1) // 2
    if length % 2 == 0:
        return s[mid_index-1:mid_index]
    else:
        return s[mid_index]