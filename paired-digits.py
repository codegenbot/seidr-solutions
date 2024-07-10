def paired_digits(digits):
    return sum(int(digit) for pair in zip([0]+digits.split(), digits) for digit in pair if digit == pair[1])