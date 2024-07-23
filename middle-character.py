```
import math
def middle_character(s):
    length = len(s)
    middle_index = math.ceil(length/2) - 1
    if length % 2 == 0:
        return s[middle_index:middle_index+2]
    else:
        return s[middle_index]