def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return "_" + s[length//2-1:length//2+2] + "_"
    else:
        return "_" + s[length//2] + "_"