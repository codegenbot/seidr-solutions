def middle_character(s):
    length = len(s)
    half = length // 2
    return s[half-half%2:half+half%2+1]