Here is the Python solution for the problem:

def paired_digits(digits):
    return sum(int(digit) for digit in digits if digit == str(int(digit) + 1)[0])