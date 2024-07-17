```
def paired_digits(s):
    s = str(s)
    return sum(int(digit) for digit in s if s.index(digit)+1 < len(s) and digit == s[s.index(digit)+1])