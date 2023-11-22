def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        mid_index = length // 2 - 1
        return s[mid_index:mid_index + 2]
    else:
        return s[length // 2]