def middle_character(s):
    if len(s) == 0:
        return ""
    length = len(s)
    mid = length // 2
    return s[mid] if length % 2 != 0 else ''.join(s[mid - 1:mid])