Here is the solution in Python:

def middle_character(s):
    n = len(s)
    return s[n//2] if n % 2 else s[(n-1)//2:n//2+1]