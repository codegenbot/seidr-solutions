def middle_character(s):
    if len(s) % 2 == 1:
        return s[len(s)//2].lower()
    elif len(s) % 2 == 0:
        return s[len(s)//2-1:len(s)//2+1].lower()