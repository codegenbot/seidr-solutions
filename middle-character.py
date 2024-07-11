def middle_character(s):
    length = len(s)
    return s[length//2].center(1 if len(s)%2 else 2, '0').replace('0', '')