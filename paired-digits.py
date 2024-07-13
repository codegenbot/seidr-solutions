def paired_digits(s):
    return sum(int(d1) for i, (d1, d2) in enumerate(zip(s[::2], s[1::2])) if d1 == d2)