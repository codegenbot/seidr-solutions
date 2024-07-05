import math

def middle_character(s):
    s = str(s)
    length = len(s)
    if length % 2 == 0:
        return s[math.floor(length/2):math.floor(length/2)+1]
    else:
        return s[math.floor((length - 1) / 2)]