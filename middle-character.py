def middle_character(s):
    s = ''.join(c for c in s if c.isalnum()).upper()
    length = len(s)
    mid = length // 2

    if length % 2:
        return s[mid]
    else:
        return s[mid-1:mid+1]