def paired_digits(input_str):
    return sum(int(digit) for digit in input_str if input_str.index(digit)+1 < len(input_str) and digit == input_str[input_str.index(digit)+1])