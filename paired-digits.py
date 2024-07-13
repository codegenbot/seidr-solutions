Here is the solution:

def paired_digits(digits):
    return sum(int(d) for d in digits if d == next((x for x in digits[1:] if x == d), None))