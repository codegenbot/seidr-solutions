def paired_digits(s):
    return sum(int(d1) for i, d1 in enumerate(s) if i > 0 and s[i-1] == '0' or s[i-1] == d1)