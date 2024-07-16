def middle_character(s):
    s = s.strip()
    length = len(s)
    if length % 2 == 0:
        return s[length//2-1:length//2+1]
    else:
        return s[length//2].strip()