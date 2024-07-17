def paired_digits(digit_string):
    return sum(int(digit) for i, digit in enumerate(digit_string) if int(digit) == int(digit_string[i+1]) if i < len(digit_string)-1)