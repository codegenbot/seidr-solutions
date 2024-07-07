def middle_character(s):
    s = s.strip().replace("!", "").replace(",", "")
    if len(s) % 2 == 1:  
        return s[len(s)//2]
    elif len(s) % 2 == 0:  
        return s[len(s)//2-1:len(s)//2+1]