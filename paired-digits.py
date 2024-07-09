def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if (digit == s[i+1] if i < len(s)-1 else True))