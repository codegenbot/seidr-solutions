import math

def middle_character(s):
    length = len(s)
    mid = math.ceil(length / 2)
    if length % 2:  
        return s[mid-1]
    else:  
        return s[mid-1:mid]