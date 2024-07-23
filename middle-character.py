def middle_character(s):
    s = s.strip().replace(" ", "").replace(",", "").replace(".", "").replace("!", "")
    length = len(s)
    
    mid = length // 2
    
    if length == 1:  
        return str(s)
    elif length % 2 == 0:  
        return str(s[mid-1:mid+1])
    else:
        return str(s[mid])