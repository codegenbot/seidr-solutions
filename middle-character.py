```
def middle_character(s):
    s_len = len(s)
    mid_index = s_len // 2
    if s_len % 2 == 0:
        return s[mid_index-1:mid_index+1]
    else:
        return s[mid_index]