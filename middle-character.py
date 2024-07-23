def middle_character(s):
    s = s.strip()
    length = len(s)
    mid = length // 2
    
    if length % 2 == 0:
        return s[mid-1:mid+1] if mid > 0 and mid < length else ""
    else:
        return s[mid]