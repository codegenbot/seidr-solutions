def square_digits(n):
    n = str(n)
    return "".join(map(str, map(lambda x: int(x)**2, str(n))))