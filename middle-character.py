def middle_character(s):
    n = len(s)
    if n % 2 == 1:
        return s[n//2]
    else:
        return s[(n-1)//2:n//2+1]