def middle_character(s):
    if not s: 
        return ""
    s = str(s)
    length = len(s)
    if length % 2 == 0:
        return s[length//2 - 1:length//2 + 1]
    else:
        return s[length//2]