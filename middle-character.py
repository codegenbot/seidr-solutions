def middle_character(s):
    length = len(s)
    mid_point = length // 2
    
    if length % 2 == 0:
        return '_'
    else:
        return "'" + s[mid_point] + "'"