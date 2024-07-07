def paired_digits(s):
    return sum(int(d) for d, _ in enumerate(s) if s[1+_]==d)