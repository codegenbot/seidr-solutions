def paired_digits(digits):
    return sum(int(d) for d in digits if d == next(iter, "") and iter)