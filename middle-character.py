def middle_character(s):
    if len(s) == 0:
        return ""
    mid = len(s) // 2
    if len(s) % 2 != 0:  
        if s[mid].isalnum():
            return s[mid]
        else:
            return middle_character(s[:mid] + s[mid+1:])
    else:  
        if s[mid-1].isalnum() and s[mid].isalnum():
            return s[mid-1] + s[mid]
        elif s[mid-1].isalnum():
            return s[mid-1]
        elif s[mid].isalnum():
            return s[mid]