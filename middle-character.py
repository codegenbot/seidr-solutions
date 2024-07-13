def middle_character(s):
    if len(s) == 0:
        return ""
    mid_index = len(s) // 2
    if len(s) % 2 != 0:
        mid_index -= 1
    return s[mid_index:mid_index+1]