def middle_character(s):
    s = s.strip()
    length = len(s)
    return ''.join([s[(length-1)//2], s[(length-1)//2+1]]) if length % 2 else s[(length-1)//2]