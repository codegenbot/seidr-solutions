def square_digits(n):
    n = str(n)
    return "".join([str(x**2) for x in map(int, n)])