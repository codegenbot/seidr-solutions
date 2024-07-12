def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if i < len(s) - 2 and digit == s[i+1])