def paired_digits(input_string):
    return sum(
        int(d)
        for d in input_string
        if d == next(c for c in input_string[i + 1 :] + input_string[:i] if c == d)
    )