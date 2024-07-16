def middle_character(s):
    length = len(s)
    mid = length // 2
    if length % 2:  
        return s[mid].upper()
    else:  
        return ''.join([c.upper() for c in s[mid-1:mid+1]])