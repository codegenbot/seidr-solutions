def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return s[length//2 - 1:length//2 + 1]
    else:
        return chr(ord(s[length//2]))