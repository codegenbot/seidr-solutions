def paired_digits(digits):
    return sum(int(digits[i]) if digits[i] != '0' else 0 for i in range(len(digits)-1) if digits[i] == digits[i+1])