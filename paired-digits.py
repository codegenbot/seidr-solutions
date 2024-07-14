def paired_digits(s):
    return sum(int(d) for i, d in enumerate(s) if (i > 0 and ((d == s[i - 1] and s[i-1] != '0') or (s[i-1] == '0' and d == '0'))))