def square_digits(n):
    return ''.join('{:02d}'.format(int(d)**2) for d in str(n))