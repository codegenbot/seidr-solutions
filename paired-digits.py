def paired_digits(s):
    return sum(int(digit) for i, (digit1, digit2) in enumerate(zip(s[::2], s[1::2])) if digit1 == digit2)