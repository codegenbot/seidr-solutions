def middle_character(s):
    length = len(s)
    midpoint = length // 2
    return s[midpoint] if length % 2 else s[midpoint:midpoint+1]