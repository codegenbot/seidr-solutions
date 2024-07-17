def paired_digits(input_str):
    return sum(int(digit) for i, digit in enumerate(input_str) if digit == input_str[i+1]) if len(input_str) > 1 else 0