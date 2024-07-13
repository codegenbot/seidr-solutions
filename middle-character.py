def middle_character(s):
    if len(s) == 0:
        return ""
    mid = len(s) // 2
    if len(s) % 2 != 0:  
        return s[mid]
    else:  
        return s[mid - 1] + (s[mid] if mid > 0 else "")