Here is the solution in Python:

def paired_digits(digits):
    return sum(int(digit) for i, digit in enumerate(digits) if digit == digits[i+1])