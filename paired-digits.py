def paired_digits(digits):
    return sum(
        int(d) for d1, d2 in zip([0] + list(digits), list(digits) + [0]) if d1 == d2
    )