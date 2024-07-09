def middle_character(s):
    length = len(s)
    mid_point = length // 2
    if length % 2 == 0:
        return s[mid_point - 1:mid_point + 1]
    else:
        return "_" + s[mid_point] + "_"