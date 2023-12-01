def square_digits(num):
    return ''.join(str(int(n)**2) for n in str(num))