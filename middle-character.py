def middle_character(s):
    length = len(s)
    mid_index = length / 2
    if length % 2 == 0:
        return s[int(mid_index-1):int(mid_index)]
    else:
        return s[int(mid_index)]