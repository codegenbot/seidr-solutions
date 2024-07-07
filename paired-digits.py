def paired_digits(s):
    return sum(int(d) for d in s if s.index(d)*2 < len(s) and d == s[s.index(d)+1])