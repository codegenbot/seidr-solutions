def middle_character(s):
    s = ''.join(e for e in s if e.isalnum())
    length = len(s)
    mid_point = length // 2
    if length % 2 == 0:
        return s[mid_point - 1:mid_point + 1]
    else:
        return s[mid_point]