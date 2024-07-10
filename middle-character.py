def middle_character(s):
    length = len(s)
    mid = length // 2
    if length % 2 == 0:
        return s[mid-1:mid+1][0].upper() + s[mid].upper()
    else:
        return s[mid].upper()