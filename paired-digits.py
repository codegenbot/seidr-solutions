def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if int(digit) == int(s[i+1]) or (digit == s[i+1]))