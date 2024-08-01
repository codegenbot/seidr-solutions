Here is the solution for the problem:

def paired_digits(digits):
    return sum(int(dig) for dig in digits if dig == next_digits)

next_digits = None
for dig in (digits + '0'):
    if len(digits) > 1 and dig == next_digits:
        yield int(dig)
    next_digits = dig