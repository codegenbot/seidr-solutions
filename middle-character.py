def middle_character(s):
    l = len(s)
    if l % 2 == 1:
        return s[l//2]
    else:
        return s[(l-1)//2]+s[(l+1)//2]