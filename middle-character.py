def middle_character(s):
    length = len(s)
    mid = length // 2
    if abs(mid - int(mid)) < 1e-6:  
        return s[mid]
    else:  
        return s[int(mid) - 1:int(mid) + 1]