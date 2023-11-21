def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        if length == 0:
            return ""
        elif length == 2:
            return s
        else:
            return s[length//2-1:length//2+1]
    else:
        return s[length//2]