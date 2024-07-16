```
def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if any(c == s[i+1] for c in s[i+1:]))