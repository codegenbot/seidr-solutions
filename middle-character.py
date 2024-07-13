def middle_character(s):
    length = len(s)
    midpoint = length // 2
    return s[midpoint:midpoint+1] if length % 2 == 0 else s[midpoint]