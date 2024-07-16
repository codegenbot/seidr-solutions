```
def paired_digits(s):
    return sum(int(x) for i, x in enumerate(s) if s[i] == s[i+1])