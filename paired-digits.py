def paired_digits(digits):
    return sum(int(d) for i, d in enumerate(digits) if i < len(digits)-1 and d == digits[i+1])