def middle_character(s):
    length = len(s)
    return s[length//2-1:length//2+1] if length % 2 == 0 else s[length//2]