def sum_paired_digits(s):
    return sum(int(c) for c, d in zip(s, s[1:]) if c == d)
