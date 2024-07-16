def paired_digits(s):
    return sum(int(digit) for digit, next_digit in zip(s, s[1:] if digit == next_digit))