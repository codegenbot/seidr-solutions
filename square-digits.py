def square_digits(num):
    num = int(abs(num))
    return ''.join(str(int(digit)**2) for digit in str(num))