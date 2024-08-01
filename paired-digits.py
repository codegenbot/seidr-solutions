def paired_digits(digits):
    return sum(int(dig) for dig in digits if dig == next_pair)


next_pair = None
for i, dig in enumerate(digits):
    if i > 0:
        if dig == prev_pair:
            next_pair = dig
    prev_pair = dig