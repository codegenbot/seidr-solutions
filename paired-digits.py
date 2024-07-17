def paired_digits(digit_string):
    return sum(int(digit) for d1, d2 in zip(digit_string, digit_string[1:]) if d1 == d2)