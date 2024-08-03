```
def middle_character(s):
    s = str(s)
    length = len(s)
    mid = length // 2
    
    if length % 2 == 1:
        return s[mid]
    else:
        return s[mid-1:mid+1]