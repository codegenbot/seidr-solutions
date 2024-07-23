def paired_digits(s):
    return sum(int(d1) for d1, d2 in zip([c for c in s if c.isdigit()], [c for c in s[1:] if c.isdigit()]) if d1 == d2)