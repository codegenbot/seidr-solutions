Here is the Python solution for the "middle-character" problem:

def middle_character(s):
    length = len(s)
    if length % 2 == 1:
        return s[length//2]
    else:
        return s[(length-1)//2]+s[length//2]