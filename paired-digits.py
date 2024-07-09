def paired_digits(s):
    return sum(int(c) for c in s if c.isdigit() and (i == 0 or c == s[i - 1]))