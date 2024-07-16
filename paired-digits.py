def paired_digits(s):
    return sum(int(d) for i, d in enumerate(s) if s[i] == d)