def paired_digits(s):
    return sum(int(d) for d in s if d * (10 - int(d)) % 11 == 0)