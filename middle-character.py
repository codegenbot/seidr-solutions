```
def middle_character(s):
    length = len(s)
    midpoint = length // 2
    if length % 2 == 0:
        return s[midpoint-1:midpoint+1][::-1]
    else:
        return s[midpoint]