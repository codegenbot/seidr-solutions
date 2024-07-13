def middle_character(s):
    s = s.strip()
    length = len(s)
    if length % 2 == 0:
        midpoint = length // 2 - 1
    else:
        midpoint = length // 2
    if length % 2 == 0:
        return s[midpoint:midpoint+2]
    else:
        return s[midpoint]