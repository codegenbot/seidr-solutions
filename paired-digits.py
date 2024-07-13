def paired_digits(s):
    return sum(int(d1) for d1, d2 in zip(s, s[1:]) if d1 == d2) + sum(int(d) for d in s if list(s).count(str(d)) > 1)