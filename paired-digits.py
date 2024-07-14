```
def paired_digits(s):
    return sum(int(d1) for i in range(0, len(s)-1, 2) if s[i] == s[i+1])