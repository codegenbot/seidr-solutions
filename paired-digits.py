def paired_digits(digits):
    return sum([int(digits[i]) for i in range(len(digits)-1) if digits[i] == digits[i+1]])