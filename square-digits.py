def square_digits(n):
    return ''.join('0' if d == '0' else str(int(d)**2) for d in str(n))