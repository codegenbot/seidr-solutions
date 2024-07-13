Here is the Python solution for the problem:

def paired_digits(digits):
    return sum(int(digit) for i, digit in enumerate(digits) if i > 0 and digit == digits[i-1])