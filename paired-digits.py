def paired_digits(s):
    total = 0
    prev_digit = None
    for char in s:
        if char == str(prev_digit):
            total += int(char)
        prev_digit = int(char)
    return total