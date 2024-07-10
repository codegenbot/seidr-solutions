def middle_character(s):
    s = ''.join(filter(str.isalnum, s))
    length = len(s)
    mid = (length + 1) // 2
    if length % 2 == 0:
        return s[mid-1:mid]
    else:
        return s[mid]