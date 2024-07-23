def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if s.find(digit) != s.rfind(digit))