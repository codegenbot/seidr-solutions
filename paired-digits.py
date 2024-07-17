def paired_digits(s):
    return sum(int(digit) for i, (digit1, digit2) in enumerate(zip(s, s[1:] + [s[0]])) if digit1 == digit2)