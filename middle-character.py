def middle_character(s):
    length = len(s)
    half = length // 2
    return s[half-1:half+1] if length % 2 else s[half::]