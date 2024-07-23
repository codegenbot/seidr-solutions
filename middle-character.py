def middle_character(s):
    s = s.strip()
    length = len(s)
    return s[(length-1)//2:((length-1)//2)+2] if length % 2 else s[length//2]