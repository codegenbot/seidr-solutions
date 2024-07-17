def paired_digits(digits):
    return sum(
        int(d) for d in set([d1 for (d1, d2) in zip(digits, digits[1:]) if d1 == d2])
    )