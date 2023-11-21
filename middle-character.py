def middle_character(s):
    length = len(s)
    return str(s[length // 2]) if length % 2 == 1 else str(s[length // 2 - 1 : length // 2 + 1]) if length != 0 else ''