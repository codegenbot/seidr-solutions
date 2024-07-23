def middle_character(s):
    s = s.strip()
    length = len(s)
    
    if length % 2 == 0:
        mid = length // 2
        return s[mid-1:mid]
    else:
        return s[length//2]