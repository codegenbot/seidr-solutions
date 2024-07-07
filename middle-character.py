def middle_character(s):
    mid = len(s) // 2
    if len(s) % 2 == 1:
        return s[mid].upper()
    elif len(s) % 2 == 0:
        return (s[mid-1].upper() + s[mid].upper())