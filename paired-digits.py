def paired_digits(digits):
    return sum(
        int(d)
        for d in digits
        if d == next(iter)
        for iter in [i for i in zip(digits, digits[1:]) if i[0] == i[1]]
    )