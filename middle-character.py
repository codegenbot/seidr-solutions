def middle_character(s):
    s = s.strip() 
    length = len(s)
    if length % 2 == 0:
        mid = length // 2
        return s[mid-1:mid+1]
    else:
        mid = length // 2
        return s[mid] if length % 2 else s[mid-1:mid+1]