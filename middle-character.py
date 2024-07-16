def middle_character(s):
    s = s.strip()
    length = len(s)
    mid = length // 2

    if length % 2:
        return s[mid]
    else:
        return s[mid - 1] + s[mid]