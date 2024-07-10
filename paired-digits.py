def paired_digits(s):
    s = str(int(s))
    return sum(int(digit) for digit in s if s[s.index(digit) + 1] == digit)