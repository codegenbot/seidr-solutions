def paired_digits(s):
    return sum(int(digit) * 2 for i, digit in enumerate(str(int(s)).lstrip('0')) if digit == str(int(s))[i+1] and (i + 1 < len(str(int(s)))-1))