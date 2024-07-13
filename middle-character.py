def middle_character(s):
    l = len(s)
    return s[l//2] if l % 2 else s[l//2-1:l//2+1]