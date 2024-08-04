def paired_digits(digit_string):
    return sum(int(x) for x in digit_string if digit_string[digit_string.index(x)] != x)