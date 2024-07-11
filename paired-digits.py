```
def paired_digits(s):
    return sum(int(digit1) for i, digit1 in enumerate(s) if i > 0 and s[i-1] == s[i])