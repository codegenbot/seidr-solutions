def square_digits(num):
    return ''.join(str(int(digit)**2) if digit.isdigit() else digit for digit in str(num))