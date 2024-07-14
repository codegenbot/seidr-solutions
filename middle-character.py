def middle_character(s):
    length = len(s)
    mid = length // 2
    if length % 2 != 0:
        return s[mid] if s[mid].isalnum() else ''
    else:
        return s[mid-1:mid+1][0].isalnum() and s[mid-1:mid+1] or ''