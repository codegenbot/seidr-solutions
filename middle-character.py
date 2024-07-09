def middle_character(s):
    s = ''.join(filter(str.isalnum, s)).lower()  
    if not isinstance(s, str) or len(s) == 0:  
        return "_"
    length = len(s)
    mid_point = length // 2
    if length % 2 == 0:
        return s[mid_point - 1:mid_point + 1]
    else:
        return s[mid_point]