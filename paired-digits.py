def paired_digits(s):
    return sum(int(digit) for digit in s if digit == s[s.index(digit) + 1])