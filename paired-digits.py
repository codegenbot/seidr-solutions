def paired_digits(s):
    return sum(int(d1) for d1 in s for d2 in s if d1 == d2 and s.index(d2) > s.index(d1))