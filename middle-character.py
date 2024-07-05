def middle_character(s):
    s = str(s)
    length = len(s)
    midpoint = (length - 1) // 2 if length % 2 else length // 2
    return s[midpoint:midpoint+1]