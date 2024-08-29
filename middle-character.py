Here is the Python solution for the problem:

def middle_character(s):
    s = str(s)
    l = len(s)
    if l % 2 == 0:
        return s[l//2-1:l//2+1]
    else:
        return s[l//2]