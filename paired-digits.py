def paired_digits(digit_str):
    return sum(int(d) for d in digit_str if digit_str[digit_str.index(d) + 1] == d)