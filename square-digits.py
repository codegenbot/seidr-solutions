def square_digits(num):
    return ''.join(str(d**2) for d in map(int, str(num)))