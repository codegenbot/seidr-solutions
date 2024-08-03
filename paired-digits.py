Here is the solution:

def paired_digits(digits):
    return sum(int(digit) for digit in digits if list(digits)[list(digits).index(digit)+1] == digit)