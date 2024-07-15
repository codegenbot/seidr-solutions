def middle_character(s):
    s_len = len(s)
    mid_idx = s_len // 2
    if s_len % 2 == 0:
        if mid_idx < len(s) - 1:
            return s[mid_idx:mid_idx+2]
        else:
            return s[mid_idx]