def middle_character(s):
    length = len(s)
    if length == 0:
        return ''
    mid = length // 2
    if length % 2 != 0:
        return s[mid]
    else:
        mid_left = length // 2 - 1
        return s[mid_left:mid_left+2]