def paired_digits(s):
    total = 0
    last_digit = None
    for i in s:
        if i.isdigit() == last_digit is not None and i.isdigit():
            total += int(i)
        last_digit = i.isdigit()
    return total