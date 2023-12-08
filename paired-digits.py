def paired_digits(digits):
    return sum(int(digits[i]) for i in range(len(digits) - 1) if i < len(digits) - 1 and digits[i].isdigit() and digits[i] == digits[i+1])