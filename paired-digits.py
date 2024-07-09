def paired_digits(s):
    return sum(int(d) for d in s if d + (s[s.find(d)+1] if s.find(d)<len(s)-1 else '') == '11')