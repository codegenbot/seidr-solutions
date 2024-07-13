def paired_digits(s):
    return sum(int(digit) for d1, d2 in zip(s, s[1:]) if d1 == d2)