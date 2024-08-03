def paired_digits(s):
    return sum(int(d) for d in s if d * 2 == int(s[i + 1]) or d * 3 == int(s[i + 1]))