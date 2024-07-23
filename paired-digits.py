def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if s.index(digit) + 1 == s.find(digit))