def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s[:-1]) if s[i] == s[i+1])