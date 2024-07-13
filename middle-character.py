```Python
def middle_character(s):
    if len(s) == 0:
        return ""
    mid = (len(s) - 1) // 2  
    if len(s) % 2 == 1:  
        return s[mid]
    else:  
        return s[mid:mid + 1]