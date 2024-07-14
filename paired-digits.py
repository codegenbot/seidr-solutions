def paired_digits(s):
    return sum(int(d) for d1, d2 in zip(s+s, s) if d1 == d2)