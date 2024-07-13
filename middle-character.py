def middle_character(s):
    length = len(s)
    return s[(length-1)//2:((length+1)//2 if length % 2 == 0 else (length//2))]