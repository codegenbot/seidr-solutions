def paired_digits(s):
    return sum(int(digit) for digit in s if s[s.index(digit) + 1] == digit and s.index(digit) < len(s) - 1)