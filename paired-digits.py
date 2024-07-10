Here is a Python function to solve this problem:

def paired_digits(digits):
    return sum(int(digit) for digit in digits if digit * 2 in digits)