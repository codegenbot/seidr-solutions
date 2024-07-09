def middle_character(s):
    length = len(s)
    mid_point = (length - 1) // 2
    if length % 2 == 0:
        return "_" + s[mid_point:mid_point+2] + "_"
    else:
        return "_" + s[mid_point] + "_"