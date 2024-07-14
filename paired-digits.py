def paired_digits(s):
    return sum(int(d1) for d1, _ in (s[i:i+2] for i in range(0, len(s), 2)) if d1 == _)