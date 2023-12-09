def square_digits(num):
    return ''.join('{:02}'.format(int(d)**2) for d in str(num))