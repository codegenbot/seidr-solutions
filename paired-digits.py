def paired_digits(s):
    return sum(int(digit) + int(next_digit) for i, (digit, next_digit) in enumerate(zip(s, s[1:])) if digit == next_digit)