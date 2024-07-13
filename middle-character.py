def middle_character(s):
    if len(s) == 0:
        return ""
    length = len(s)
    mid = length // 2
    if length % 2 != 0:  
        return s[mid]
    else:  
        return s[mid - 1] + s[mid]