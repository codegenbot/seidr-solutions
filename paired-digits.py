def paired_digits(input_str):
    return sum(int(digit) for digit in input_str if digit*2 in input_str[input_str.index(digit)+1:])