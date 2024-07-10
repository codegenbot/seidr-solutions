def middle_character(s):
    s_len = len(s)
    return s[s_len//2-1:s_len//2+1] if s_len % 2 == 0 else s[s_len//2]