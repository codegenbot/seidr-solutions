def paired_digits(s):
    return sum(int(d1) for d1, d2 in zip(s, s[1+len(s)//2:])) if len(s) % 2 == 0 else 0