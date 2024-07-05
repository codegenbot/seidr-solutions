def middle_character(s):
    s = str(s)
    length = len(s)
    return s[int(length/2)-1:int(length/2)+1] if length % 2 == 0 else s[int(length/2)]