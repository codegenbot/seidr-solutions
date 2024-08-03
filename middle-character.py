def middle_character(s):
    s_len = len(s)
    if s_len % 2 == 1:
        return str(s[s_len // 2])
    else:
        return str(s[s_len // 2 - 1:s_len // 2 + 1])