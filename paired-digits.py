def paired_digits(s):
    i = 0
    return sum(int(digit) for digit in s if s[i+1] == digit)