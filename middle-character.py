def middle_character(s):
    if len(s) == 0:
        return ""
    mid_index = len(s) // 2
    if len(s) % 2 != 0:
        return s[mid_index]
    else:
        return s[mid_index-1:mid_index+1]