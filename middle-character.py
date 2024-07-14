def middle_character(s):
    length = len(s)
    if length % 2 != 0:
        return s[length // 2].isalnum() and s[length // 2] or '.'
    else:
        mid = length // 2
        return s[mid-1:mid+1].translate({ord(c): '' for c in set(s) if not c.isalnum()})