def middle_character(s):
    if len(s) == 0:
        return ""
    mid_index = len(s) // 2
    return s[mid_index] if len(s) % 2 != 0 else s[mid_index - mid_index // 2 : mid_index + mid_index // 2 + 1]