def paired_digits(digits):
    return sum(int(digits[i]) for i in range(1, len(digits)) if digits[i-1] == digits[i]) + (int(digits[-1]) if digits[-1] == digits[0] else 0)