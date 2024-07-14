def middle_character(s):
    length = len(s)
    half = length // 2
    return s[half-1:half+2] if length % 2 == 0 else s[half]