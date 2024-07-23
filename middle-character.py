```
def middle_character(s):
    length = len(s)
    mid = length // 2
    if length % 2 == 0:
        return s[mid-1:mid+1][1] + s[mid]
    else:
        return s[mid]