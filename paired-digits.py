def paired_digits(digits):
    return sum(int(d) for d in range(len(digits)) if digits[d] == digits[(d + 1) % len(digits)])