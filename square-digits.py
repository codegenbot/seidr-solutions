def square_digits(n):
    if isinstance(n, int) and n > 0:
        return ''.join(str(int(d)**2) for d in str(n))
    else:
        return "Invalid input, please provide a positive integer"