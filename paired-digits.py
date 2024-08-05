def paired_digits(n):
    return sum(int(digit) for digit in str(n) if str(n)[str(n).index(digit)+1] == digit)