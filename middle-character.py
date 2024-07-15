def middle_character(s):
    s_len = len(s)
    mid_idx = s_len // 2
    return s[mid_idx] if s_len % 2 == 1 else s[mid_idx-1:mid_idx+1][1:-1]