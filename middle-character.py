```
def middle_character(s):
    s_len = len(s)
    mid_idx = s_len // 2
    if s_len % 2 == 0:
        return s[mid_idx-1:mid_idx+1]
    else:
        return s[mid_idx]