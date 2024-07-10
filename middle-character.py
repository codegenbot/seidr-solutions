import math

def middle_character(s):
    length = len(s)
    mid = length // 2
    if length % 2 == 0:
        return s[math.ceil(mid)-1:mid+1]
    else:
        return s[mid]