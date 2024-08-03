```
def middle_character(s):
    s_len = len(s)
    half_index = s_len // 2
    if s_len % 2 == 0:
        return s[half_index-1:half_index+1]
    else:
        return s[half_index]