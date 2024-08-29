```
def paired_digits(digits):
    return sum(int(d1) for d1, d2 in zip(digits, digits[1:]) if str(d1) == str(d2))