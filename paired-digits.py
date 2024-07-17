def paired_digits(s):
    return sum(int(digit) for i, (digit1, digit2) in enumerate(zip([s[0]], s)) if digit1 == digit2)