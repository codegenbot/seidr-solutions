def middle_character(s):
    s_len = len(s)
    if s_len % 2 == 0:
        mid_index1 = (s_len // 2) - 1
        mid_index2 = s_len // 2
        return s[mid_index1 : mid_index2 + 1]
    else:
        return s[s_len // 2]