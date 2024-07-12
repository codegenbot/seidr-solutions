def middle_character(s):
    length = len(s)
    mid_index = length // 2
    if length % 2 == 0:
        return chr(s[mid_index]) + chr(s[mid_index + 1])
    else:
        return chr(s[mid_index])