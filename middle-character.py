def middle_character(s):
    s = str(s)
    length = len(s)
    return s[(length-1)//2:(length+1)//2]