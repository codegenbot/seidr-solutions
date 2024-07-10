def middle_character(s):
    s_len = len(s)
    if s_len % 4 == 1:
        return s[s_len//2]
    elif s_len % 4 == 3:
        return s[s_len//2-1:s_len//2+1]