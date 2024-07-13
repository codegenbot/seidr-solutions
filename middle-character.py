def middle_character(s):
    if len(s) == 0:
        return ""
    mid_index = len(s) // 2
    return s[mid_index] if len(s) % 2 != 0 else s[mid_index-1:mid_index+1]