def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if s[i] == s[i+1])