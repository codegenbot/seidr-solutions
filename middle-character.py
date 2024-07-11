def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return s[(length-1)//2:(length+1)//2].lstrip(',')
    else:
        return s[length // 2]