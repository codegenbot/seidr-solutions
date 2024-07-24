def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return s[length // 2 - 1:length // 2 + 1]
    else:
        return s[max(0, length // 2 - 1):min(length, length // 2 + 1)]