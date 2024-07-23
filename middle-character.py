def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return s[int((length-1)/2):int((length-1)/2)+1].strip()
    else:
        return s[int((length-1)/2)].strip()