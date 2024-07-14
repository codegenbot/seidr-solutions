Here is the Python solution for the problem:

def paired_digits(digits):
    return sum(int(d) for d in digits if d == next(iter(iter(digits[1:]))) + d)