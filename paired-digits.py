```
def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s[:-1]) if digit == s[i+1])