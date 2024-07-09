```
def paired_digits(s):
    return sum(int(c) for i, c in enumerate(s) if c.isdigit() and (i == 0 or c == s[i - 1]))