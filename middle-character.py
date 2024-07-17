```
def middle_character(s):
    s_len = len(s)
    mid = s_len // 2
    
    if s_len % 2 == 1:
        return s[mid]
    else:
        return s[mid-1:mid+1]