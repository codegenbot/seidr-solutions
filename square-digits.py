def square_digits(n):
    return int(''.join(str(int(d)**2) for d in str(n)))