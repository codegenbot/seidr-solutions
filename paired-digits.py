def paired_digits(input_str):
    return sum(int(digit) for i, digit in enumerate(input_str) if i < len(input_str) - 1 and digit == input_str[i+1])