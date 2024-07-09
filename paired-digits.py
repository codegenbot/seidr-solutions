```
def paired_digits(s):
    s = str(int(s))  
    return sum(int(digit) * 2 for i, digit in enumerate(s) if i < len(s) - 1 and digit == s[i + 1])