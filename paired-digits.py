def paired_digits(s):
    return sum(int(d) for d in s if d + (s[s.index(d)+1] if s.index(d)<len(s)-1 else '') == '11')