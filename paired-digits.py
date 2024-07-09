def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if i > 0 and s[i-1] == s[i])