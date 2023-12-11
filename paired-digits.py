def sum_same(digits):
    return sum(int(digit) for digit in digits if digits[i+1] == digit)