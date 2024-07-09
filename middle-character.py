import math

def middle_character(s):
    length = len(s)
    mid = math.floor(length / 2)
    return s[mid:mid+1] if length % 2 != 0 else s[mid-1:mid+1]