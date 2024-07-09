def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return "_" + s[length//2-1 if length%2 else length//2] + "_" + s[length//2]
    else:
        mid_char = s[length//2]
        return "_" + mid_char + "_"