def middle_character(s):
    length = len(s)
    mid = (length + 1) // 2
    if length % 2 == 0:
        return s[mid-1:mid+1]
    else:
        return s[mid]