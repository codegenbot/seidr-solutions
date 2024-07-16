```python
def paired_digits(s):
    total = 0
    last_digit = s[0]
    for i, digit in enumerate(s):
        if digit == last_digit:
            total += int(digit)
        last_digit = digit
    return total