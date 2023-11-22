def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        mid_index = length // 2
        return s[mid_index - 1 : mid_index + 1]
    else:
        return s[length // 2]