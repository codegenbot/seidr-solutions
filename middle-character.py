def middle_character(s):
    s = str(s)
    length = len(s)
    if length == 0:
        return s[length//2]
    half = length // 2
    if length % 2 == 1:
        return s[half]
    else:
        return s[half - 1:half + 1]