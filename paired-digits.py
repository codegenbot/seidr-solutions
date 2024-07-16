```
def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if any(c == digit for c in s[i+1:]))