def middle_character(s):
    s = s.strip() 
    mid = len(s) // 2
    if len(s) % 2 == 0:
        return s[mid-1:mid+1] 
    else:
        return s[mid]