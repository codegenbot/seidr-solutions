def paired_digits(s):
    return sum(int(d1) for d1, _ in zip([s[0]], s))