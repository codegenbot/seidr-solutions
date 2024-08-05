def paired_digits(s):
    return sum(int(digit) for digit in s if digit * 2 in s)