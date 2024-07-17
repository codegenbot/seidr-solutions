def paired_digits(digit_string):
    return sum(int(d) for i, d in enumerate(digit_string) if i % 2 == 0 and d == digit_string[i+1])