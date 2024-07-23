```
import math

def middle_character(s):
    s = str(s)
    length = len(s)
    if length % 2 == 0:
        return s[math.ceil(length/2)-1:math.ceil(length/2)]
    else:
        return s[math.ceil(length/2)]