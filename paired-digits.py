def paired_digits(s):
    return sum(int(digit) * 2 for i, digit in enumerate(s) if i % 2 == len(s) % 2 and int(digit) == int(s[(i + 1) % len(s)]))