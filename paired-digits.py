def paired_digits(s):
    return sum(int(d) for d in s if s[i + 1] == d)