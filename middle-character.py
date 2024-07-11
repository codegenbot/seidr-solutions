def middle_character(s):
    length = len(s)
    return s[length//2] if length % 2 else s[length//2-1:length//2+1]