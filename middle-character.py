def middle_char(s):
    s_len = len(s)
    mid_index = s_len // 2
    return s[mid_index] if s_len % 2 else s[mid_index - 1 : mid_index + 1]