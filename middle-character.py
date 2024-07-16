import math

def middle_character(s):
    length = len(s)
    mid = math.floor(length / 2) 
    if length % 2 == 0:
        return s[mid-1:mid+1] 
    else:
        return s[mid]