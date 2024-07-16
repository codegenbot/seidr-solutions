def middle_character(s):
    length = len(s)
    mid = length // 2
    return s[mid] if length % 2 else ''.join([s[mid-1], s[mid]])