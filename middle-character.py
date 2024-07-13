```
def middle_character(s):
    s = s.strip()
    length = len(s)
    midpoint = (length - 1) // 2
    if length % 2 == 0:
        return s[midpoint:midpoint+2]
    else:
        return s[midpoint]