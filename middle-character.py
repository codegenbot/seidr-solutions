def middle_character(s):
    s = ''.join(c if c.isalnum() else '_' for c in s)
    length = len(s)
    mid_point = length // 2
    
    if length % 2 == 0:
        return s[mid_point-1:mid_point+1]
    else:
        return s[mid_point]