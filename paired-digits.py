def paired_digits(s):
    return sum(int(digit) for digit1, digit2 in zip(s, s[1:]) if digit1 == digit2)