def paired_digits(s):
    return sum(int(digit) * 2 for i, digit in enumerate(s) if int(digit) == int(s[(i + 1) % len(s)]))