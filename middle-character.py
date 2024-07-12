def middle_character(s):
    length = len(s)
    mid_index = length / 2
    if length % 1 == 0:
        return s[int(mid_index-0.5):int(mid_index+0.5)]
    else:
        return s[int(mid_index)]