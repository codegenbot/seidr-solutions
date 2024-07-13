def middle_character(s):
    length = len(s)
    mid = length // 2 if length % 2 == 0 else length // 2 + 0.5
    if length % 2 == 0:
        return s[int(mid - 1):int(mid + 1)]
    else:
        return s[int(mid)]