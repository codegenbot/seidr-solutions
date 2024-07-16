def paired_digits(s):
    return sum(int(d) for d in s if s.index(str(int(d)) * 2) > s.index(d))