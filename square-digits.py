def square_digits(n):
    return "".join([str(int(x) ** 2).zfill(len(x)) for x in map(int, str(n))])