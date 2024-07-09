def middle_character(s):
    length = len(s)
    mid_point = (length - 1) // 2 if length % 2 else length // 2
    
    if 0 <= mid_point < length:
        if length % 2 == 0:
            return s[mid_point-1:mid_point+1]
        else:
            return s[mid_point]
    else:
        return '_'