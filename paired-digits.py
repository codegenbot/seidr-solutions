```
def paired_digits(s):
    return sum(int(d1) for d1, d2 in zip(s[::2], s[1::2]) if d1 == d2)