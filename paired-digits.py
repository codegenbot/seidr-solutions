```
def paired_digits(s):
    s = list(map(int, s))
    return sum(digit for i, digit in enumerate(s) if i < len(s)-1 and str(digit) == str(s[i+1]))