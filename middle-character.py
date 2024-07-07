```
def middle_character(s):
    if len(s) % 2 == 1:
        return s[len(s)//2]
    else:
        return s[(len(s)-1)//2: len(s)//2+1]