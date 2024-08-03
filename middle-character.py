Here is the Python solution:

def middle_character(s):
    n = len(s)
    if n % 2 == 1: 
        return s[n//2]
    else:
        return s[(n-1)//2]+s[(n+1)//2]