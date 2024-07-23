def middle_character(s):
    s = s.strip().replace(" ", "")
    length = len(s)
    
    mid = length // 2
    
    if length == 1:  
        return s
    elif length % 2 == 0:  
        return s[mid-1] + s[mid]
    else:
        return s[mid]