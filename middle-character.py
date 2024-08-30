def middle_character(s):
    s_len = len(s)
    mid = s_len // 2
    if s_len % 2 == 0:
        return s[mid-1:mid+1]
    else:
        return s[mid]