def middle_character(s):
    if len(s) == 0:
        return ""
    mid_index = len(s) // 2
    if len(s) % 2 == 0:
        start_index = mid_index - 1
    else:
        start_index = mid_index
    return s[start_index:start_index+1]