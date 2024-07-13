Here is the solution in Python:

def paired_digits(digits):
    return sum(int(d) for d1, d2 in zip([c for c in digits], [c for c in digits[1:]] if d1 == d2))