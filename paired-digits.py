def paired_digits(digits):
    return sum(
        int(d)
        for d in set(d1)
        if digits.index(d1) < len(digits) - 1 and digits[digits.index(d1) + 1] == d1
    )