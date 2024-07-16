def middle_character(s):
    length = len(s)
    half_index = length // 2
    if length % 2 == 0:
        return s[half_index - 1:half_index + 1]
    else:
        return s[half_index]