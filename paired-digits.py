def paired_digits(digits):
    return sum(int(digit) for digit in digits if digit == next_digits)