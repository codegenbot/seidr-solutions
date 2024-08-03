def paired_digits(s):
    return sum(int(digit) for digit in s if s[i] == s[i + 1])