def middle_character(s):
    length = len(s)
    half = length // 2
    if length % 2 == 0:
        return s[half-1:half+1]
    else:
        return s[half]