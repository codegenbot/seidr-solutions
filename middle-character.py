def middle_character(s):
    length = len(s)
    half_length = length // 2
    if length % 2 == 0:
        return s[half_length-1:half_length+1]
    else:
        return s[half_length]