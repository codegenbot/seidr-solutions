def paired_digits(s):
    return sum(int(digit) + int(s[i+1]) for i, digit in enumerate(s) if digit == s[i+1])