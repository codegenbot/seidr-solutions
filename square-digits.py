def square_digits(n):
    return '0' if n == 0 else ''.join(str(int(d)**2) for d in str(n))