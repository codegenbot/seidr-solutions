```
def paired_digits(s):
    return sum(int(x) for x in s for i in range(len(s)-1) if s[i] == s[i+1])