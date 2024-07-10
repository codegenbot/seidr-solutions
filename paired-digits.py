def paired_digits(digits):
    return sum(int(digit) for digit in digits if digit == next_iter_digit)


def next_iter_digit(digits):
    for i in range(len(digits)):
        yield str(int(digits[i]))