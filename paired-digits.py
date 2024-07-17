```
def paired_digits(s):
    return sum(int(digit) + int(s[i + 1]) for i, digit in enumerate(s) if i < len(s) - 1 and digit == s[i + 1])