```
def paired_digits(s):
    total = 0
    prev_digit = None
    for char in s:
        if char == prev_digit:
            total += int(char)
        prev_digit = char
    return total