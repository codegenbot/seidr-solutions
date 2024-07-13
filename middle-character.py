def middle_character(s):
    length = len(s)
    midpoint = length // 2
    if length % 2 == 0:
        return s[midpoint:midpoint+1] + s[midpoint+1]
    else:
        return s[midpoint]