def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        start = length // 2
        end = start + 1
    else:
        start = length // 2
        end = start + 1
    return s[start:end]