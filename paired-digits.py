```
def paired_digits(s):
    return sum(int(digit) for i, (digit, next_digit) in enumerate(s) if digit == next_digit)