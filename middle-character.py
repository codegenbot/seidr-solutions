def middle_character(s):
    s = ''.join(filter(str.isalnum, s))
    length = len(s)
    mid_point = length // 2
    
    if length % 2 == 0:
        return s[mid_point-1:mid_point]
    else:
        return s[mid_point]