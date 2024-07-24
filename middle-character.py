def middle_character(s):
    length = len(s)
    mid_idx = length // 2
    if length % 2 == 0: 
        return s[mid_idx - 1:mid_idx + 1]
    else: 
        return s[mid_idx]