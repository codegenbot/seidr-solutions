def square_digits(num):
    return ''.join(str(int(d)**2) if d != '0' else '0' for d in str(num))