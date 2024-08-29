def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        start = length // 2 - 1
        end = length // 2 + 1
        return s[start:end]
    else:
        return s[length//2]