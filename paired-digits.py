```
def paired_digits(s):
    return sum(int(digit) * 2 for i, digit in enumerate(s) if digit == s[i+1])