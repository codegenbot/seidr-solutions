def paired_digits(s):
    return sum(int(d) for d, prev_d in zip(s, s[1:]) if d == prev_d)