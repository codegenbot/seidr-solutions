def middle_character(s):
    length = len(s)
    mid = (length-1)//2
    if length % 2 == 0:
        return "_" + s[mid:mid+2] + "_"
    else:
        return "_" + s[mid] + "_"