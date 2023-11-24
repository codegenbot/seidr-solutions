def square_digits(n):
    return ''.join(str(int(d) ** 2).zfill(2) for d in str(n))