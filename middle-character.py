```
def middle_character(s):
    s = s.strip().replace(" ", "").lower()
    length = len(s)
    
    mid = length // 2
    
    if length == 1:  
        return s
    elif length % 2 == 0:  
        return s[mid-1:mid+1]
    else:
        return s[mid].upper() if not s[mid].isalnum() or ord(s[mid]) < 64 else s[mid]