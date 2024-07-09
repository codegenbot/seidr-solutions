```
def paired_digits(s):
    return sum(int(c) for i, c in enumerate(s) if c.isdigit() and i < len(s)-1 and c == s[i+1])