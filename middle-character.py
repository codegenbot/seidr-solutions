def middle_character(s):
    s = s.strip().upper()
    length = len(s)
    return ''.join([s[length//2 - 1], s[length//2]]) if length % 2 else s[length//2-1:length//2+1]