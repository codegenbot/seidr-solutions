def middle_character(s):
    s_len = len(s)
    if s_len % 2 == 0:
        mid1 = s_len // 2 - 1
        mid2 = s_len // 2
        return s[mid1:mid2+1] 
    else:
        return s[s_len // 2]