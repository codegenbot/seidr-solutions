def middle_character(s):
    s = str(s)
    length = len(s)
    if length == 0:
        return ''
    elif length % 2 == 0:
        return s[(length-1)//2:(length+1)//2]
    else:
        return s[length // 2]