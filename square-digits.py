def square_digits(n):
    return ''.join(str(int(d) ** 2).zfill(1) for d in str(n))