Here is a Python function that solves the problem:

def middle_character(s):
    if len(s) % 2 == 0:
        return s[len(s)//2-1:len(s)//2+1]
    else:
        return s[len(s)//2]