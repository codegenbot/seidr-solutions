def paired_digits(digits):
    return sum(
        int(digit)
        for pair in zip([0] + list(digits), list(digits) + [0])
        for digit in pair
        if digit == pair[1]
    )