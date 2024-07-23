def middle_character(s):
    s = s.strip().replace(" ", "")
    length = len(s)
    
    mid = (length - 1) // 2 if length % 2 else length // 2
    
    return s[mid] if length % 2 else s[mid:mid+2]