```
def middle_character(s):
    length = len(s)
    if length == 0:
        return ''
    mid = length // 2
    if length % 2 != 0:
        return s[mid]
    else:
        return s[mid-1:mid+1].center(1, '')[0]