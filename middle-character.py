def middle_character(s):
    s = s.strip() 
    length = len(s)
    middle = length // 2
    return s[middle-1:middle+1] if length % 2 == 0 else s[middle]