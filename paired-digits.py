```
def paired_digits(s):
    return sum(int(d) for i, d in enumerate(s) if i+1 < len(s) and d == s[i+1])