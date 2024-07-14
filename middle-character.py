def middle_character(s):
    length = len(s)
    if length == 0:
        return ''
    mid = length // 2
    if length % 2 != 0:
        return s[mid].strip()
    else:
        return ''.join(c.strip() for c in s[mid-1:mid+1])