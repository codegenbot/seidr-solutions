def middle_character(s):
    s = ''.join(c for c in s if c.isalnum()).upper()  
    length = len(s)
    return s[(length-1)//2] if length % 2 else s[length//2-1:length//2+1]