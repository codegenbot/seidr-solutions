import math

def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return s[math.floor(length/2)-1:math.floor(length/2)+1]
    else:
        return s[math.floor(length/2)]