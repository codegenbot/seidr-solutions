def middle_character(s):
    s_len = len(s)
    mid = s_len // 2
    return s[mid - 1 : mid + 1] if s_len % 2 == 0 else s[mid]