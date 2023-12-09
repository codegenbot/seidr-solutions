def square_digits(num):
    return ''.join((str(int(d)**2)).zfill(2) for d in str(num))