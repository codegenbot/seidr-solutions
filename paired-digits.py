```
def paired_digits(s):
    return sum(int(d1) for i in range(len(s)-1) if s[i] == s[i+1])