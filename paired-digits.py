def paired_digits(s):
    return sum(int(d1) for d1, d2 in zip([s[0]] + s, s) if d1 == d2)