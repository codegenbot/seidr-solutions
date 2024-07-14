def paired_digits(digits):
    return sum(
        int(digit)
        for pair in zip([0] + list(digits), list(digits) + [0])
        if str(pair[0]) == str(pair[1])
    )