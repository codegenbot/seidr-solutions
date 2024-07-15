def paired_digits(s):
    return sum(int(d1) for i, d1 in enumerate(s) if (d1 == s[i+1] or d1 == s[0]))