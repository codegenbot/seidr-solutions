def paired_digits(s):
    return sum(int(d1) for d1, d2 in [(s[i]+s[i+1]) for i in range(len(s)-1)] if d1==d2)