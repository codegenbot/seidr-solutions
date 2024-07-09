def middle_character(s):
    s = s.replace("_", "")
    length = len(s)
    if length % 2 == 0:
        return "_" + s[length//2-1:length//2+1] + "_"
    else:
        return "_" + s[length//2] + "_"