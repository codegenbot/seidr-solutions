def paired_digits(s):
    return sum(int(d) for d in s if d == next(c for c in s[1:] if c == d))