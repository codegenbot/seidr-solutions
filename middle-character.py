def middle_character(s):
    mid = len(s) // 2
    return s[mid - (len(s) % 2)] if len(s) % 2 else s[mid-1:mid+1]