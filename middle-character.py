def middle_character(s):
    s = str(s)
    n = len(s) // 2
    return s[n] if len(s) % 2 else s[n-1:n+1]