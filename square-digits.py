def square_digits(n):
    return ''.join(str(d**2) for d in map(int, str(n))) if n != 0 else '0'