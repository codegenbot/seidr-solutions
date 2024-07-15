```
def paired_digits(s):
    return sum(int(d1) for i, d1 in enumerate(s) if i < len(s)-1 and s[i] == s[i+1])