```
def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return "_" + s[length//2-1:length//2+1] + "_"
    else:
        mid_char = s[length//2]
        if mid_char.isalnum():
            return "_" + mid_char + "_"
        else:
            return "_" + s[length//2] + "_"