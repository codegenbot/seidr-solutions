def paired_digits(s):
    return sum(int(d) * 2 for i, d in enumerate(s) if i % 2 == 0 and d == s[i+1])