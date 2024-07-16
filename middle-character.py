def middle_character(s):
    s = s.strip()
    length = len(s)
    mid = length // 2

    if length % 2:
        return s[mid].upper() if s[mid].isalpha() else s[mid]
    else:
        return ''.join([c.upper() if c.isalpha() else c for c in s[mid-1:mid+1]])