def paired_digits(digit_str):
    return sum(int(x) for x in digit_str if digit_str[digit_str.index(x)] == x)